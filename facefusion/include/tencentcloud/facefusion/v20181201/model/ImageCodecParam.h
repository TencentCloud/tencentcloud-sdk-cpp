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

#ifndef TENCENTCLOUD_FACEFUSION_V20181201_MODEL_IMAGECODECPARAM_H_
#define TENCENTCLOUD_FACEFUSION_V20181201_MODEL_IMAGECODECPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20181201/model/MetaData.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20181201
        {
            namespace Model
            {
                /**
                * 图片编码参数
                */
                class ImageCodecParam : public AbstractModel
                {
                public:
                    ImageCodecParam();
                    ~ImageCodecParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取元数据
                     * @return MetaData 元数据
                     * 
                     */
                    std::vector<MetaData> GetMetaData() const;

                    /**
                     * 设置元数据
                     * @param _metaData 元数据
                     * 
                     */
                    void SetMetaData(const std::vector<MetaData>& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * 元数据
                     */
                    std::vector<MetaData> m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20181201_MODEL_IMAGECODECPARAM_H_
