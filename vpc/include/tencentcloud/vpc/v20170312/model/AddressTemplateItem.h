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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEITEM_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 地址信息
                */
                class AddressTemplateItem : public AbstractModel
                {
                public:
                    AddressTemplateItem();
                    ~AddressTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取起始地址。
                     * @return From 起始地址。
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置起始地址。
                     * @param From 起始地址。
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取结束地址。
                     * @return To 结束地址。
                     */
                    std::string GetTo() const;

                    /**
                     * 设置结束地址。
                     * @param To 结束地址。
                     */
                    void SetTo(const std::string& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     */
                    bool ToHasBeenSet() const;

                private:

                    /**
                     * 起始地址。
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 结束地址。
                     */
                    std::string m_to;
                    bool m_toHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEITEM_H_
