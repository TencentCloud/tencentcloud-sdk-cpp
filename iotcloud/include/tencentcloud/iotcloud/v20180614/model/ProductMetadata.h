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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_PRODUCTMETADATA_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_PRODUCTMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * 产品元数据
                */
                class ProductMetadata : public AbstractModel
                {
                public:
                    ProductMetadata();
                    ~ProductMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品创建时间
                     * @return CreationDate 产品创建时间
                     * 
                     */
                    uint64_t GetCreationDate() const;

                    /**
                     * 设置产品创建时间
                     * @param _creationDate 产品创建时间
                     * 
                     */
                    void SetCreationDate(const uint64_t& _creationDate);

                    /**
                     * 判断参数 CreationDate 是否已赋值
                     * @return CreationDate 是否已赋值
                     * 
                     */
                    bool CreationDateHasBeenSet() const;

                private:

                    /**
                     * 产品创建时间
                     */
                    uint64_t m_creationDate;
                    bool m_creationDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_PRODUCTMETADATA_H_
