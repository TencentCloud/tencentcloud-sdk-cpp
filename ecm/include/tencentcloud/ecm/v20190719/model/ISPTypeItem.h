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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ISPTYPEITEM_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ISPTYPEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 申请ipv6 cidr block的信息
                */
                class ISPTypeItem : public AbstractModel
                {
                public:
                    ISPTypeItem();
                    ~ISPTypeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IPv6 Cidr所属运营商类型，支持的类型有 'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调。作为入参数时为必选。
                     * @return ISPType IPv6 Cidr所属运营商类型，支持的类型有 'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调。作为入参数时为必选。
                     * 
                     */
                    std::string GetISPType() const;

                    /**
                     * 设置IPv6 Cidr所属运营商类型，支持的类型有 'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调。作为入参数时为必选。
                     * @param _iSPType IPv6 Cidr所属运营商类型，支持的类型有 'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调。作为入参数时为必选。
                     * 
                     */
                    void SetISPType(const std::string& _iSPType);

                    /**
                     * 判断参数 ISPType 是否已赋值
                     * @return ISPType 是否已赋值
                     * 
                     */
                    bool ISPTypeHasBeenSet() const;

                    /**
                     * 获取申请IPv6 Cidr Block的个数。作为入参数时为必选。
                     * @return Count 申请IPv6 Cidr Block的个数。作为入参数时为必选。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置申请IPv6 Cidr Block的个数。作为入参数时为必选。
                     * @param _count 申请IPv6 Cidr Block的个数。作为入参数时为必选。
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * IPv6 Cidr所属运营商类型，支持的类型有 'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调。作为入参数时为必选。
                     */
                    std::string m_iSPType;
                    bool m_iSPTypeHasBeenSet;

                    /**
                     * 申请IPv6 Cidr Block的个数。作为入参数时为必选。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ISPTYPEITEM_H_
