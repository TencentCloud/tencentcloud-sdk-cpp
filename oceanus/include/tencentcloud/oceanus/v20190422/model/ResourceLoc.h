/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCELOC_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCELOC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/ResourceLocParam.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 资源位置描述
                */
                class ResourceLoc : public AbstractModel
                {
                public:
                    ResourceLoc();
                    ~ResourceLoc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源位置的存储类型，目前只支持1:COS
                     * @return StorageType 资源位置的存储类型，目前只支持1:COS
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置资源位置的存储类型，目前只支持1:COS
                     * @param _storageType 资源位置的存储类型，目前只支持1:COS
                     * 
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取描述资源位置的json
                     * @return Param 描述资源位置的json
                     * 
                     */
                    ResourceLocParam GetParam() const;

                    /**
                     * 设置描述资源位置的json
                     * @param _param 描述资源位置的json
                     * 
                     */
                    void SetParam(const ResourceLocParam& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                private:

                    /**
                     * 资源位置的存储类型，目前只支持1:COS
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 描述资源位置的json
                     */
                    ResourceLocParam m_param;
                    bool m_paramHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCELOC_H_
