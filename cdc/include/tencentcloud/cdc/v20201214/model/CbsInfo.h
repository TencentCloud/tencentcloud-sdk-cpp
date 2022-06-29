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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_CBSINFO_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_CBSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * 购买的cbs信息
                */
                class CbsInfo : public AbstractModel
                {
                public:
                    CbsInfo();
                    ~CbsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cbs存储大小，单位TB
                     * @return Size cbs存储大小，单位TB
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置cbs存储大小，单位TB
                     * @param Size cbs存储大小，单位TB
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取cbs存储类型，默认为SSD
                     * @return Type cbs存储类型，默认为SSD
                     */
                    std::string GetType() const;

                    /**
                     * 设置cbs存储类型，默认为SSD
                     * @param Type cbs存储类型，默认为SSD
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * cbs存储大小，单位TB
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * cbs存储类型，默认为SSD
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_CBSINFO_H_
