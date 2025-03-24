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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_MODELVERSIONCOUNT_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_MODELVERSIONCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 型号和对应的版本数量
                */
                class ModelVersionCount : public AbstractModel
                {
                public:
                    ModelVersionCount();
                    ~ModelVersionCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取型号名称
                     * @return DevModel 型号名称
                     * 
                     */
                    std::string GetDevModel() const;

                    /**
                     * 设置型号名称
                     * @param _devModel 型号名称
                     * 
                     */
                    void SetDevModel(const std::string& _devModel);

                    /**
                     * 判断参数 DevModel 是否已赋值
                     * @return DevModel 是否已赋值
                     * 
                     */
                    bool DevModelHasBeenSet() const;

                    /**
                     * 获取版本数量
                     * @return VersionCount 版本数量
                     * 
                     */
                    uint64_t GetVersionCount() const;

                    /**
                     * 设置版本数量
                     * @param _versionCount 版本数量
                     * 
                     */
                    void SetVersionCount(const uint64_t& _versionCount);

                    /**
                     * 判断参数 VersionCount 是否已赋值
                     * @return VersionCount 是否已赋值
                     * 
                     */
                    bool VersionCountHasBeenSet() const;

                private:

                    /**
                     * 型号名称
                     */
                    std::string m_devModel;
                    bool m_devModelHasBeenSet;

                    /**
                     * 版本数量
                     */
                    uint64_t m_versionCount;
                    bool m_versionCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_MODELVERSIONCOUNT_H_
