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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDSHAREUNITREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDSHAREUNITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * AddShareUnit请求参数结构体
                */
                class AddShareUnitRequest : public AbstractModel
                {
                public:
                    AddShareUnitRequest();
                    ~AddShareUnitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取共享单元名称。仅支持大小写字母、数字、-、以及_的组合，3-128个字符。
                     * @return Name 共享单元名称。仅支持大小写字母、数字、-、以及_的组合，3-128个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置共享单元名称。仅支持大小写字母、数字、-、以及_的组合，3-128个字符。
                     * @param _name 共享单元名称。仅支持大小写字母、数字、-、以及_的组合，3-128个字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取共享单元地域。可通过接口[DescribeShareAreas](https://cloud.tencent.com/document/product/850/103050)获取支持共享的地域。
                     * @return Area 共享单元地域。可通过接口[DescribeShareAreas](https://cloud.tencent.com/document/product/850/103050)获取支持共享的地域。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置共享单元地域。可通过接口[DescribeShareAreas](https://cloud.tencent.com/document/product/850/103050)获取支持共享的地域。
                     * @param _area 共享单元地域。可通过接口[DescribeShareAreas](https://cloud.tencent.com/document/product/850/103050)获取支持共享的地域。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取共享单元描述。最大128个字符。
                     * @return Description 共享单元描述。最大128个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置共享单元描述。最大128个字符。
                     * @param _description 共享单元描述。最大128个字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号，默认值：1
                     * @return ShareScope 共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号，默认值：1
                     * 
                     */
                    uint64_t GetShareScope() const;

                    /**
                     * 设置共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号，默认值：1
                     * @param _shareScope 共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号，默认值：1
                     * 
                     */
                    void SetShareScope(const uint64_t& _shareScope);

                    /**
                     * 判断参数 ShareScope 是否已赋值
                     * @return ShareScope 是否已赋值
                     * 
                     */
                    bool ShareScopeHasBeenSet() const;

                private:

                    /**
                     * 共享单元名称。仅支持大小写字母、数字、-、以及_的组合，3-128个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 共享单元地域。可通过接口[DescribeShareAreas](https://cloud.tencent.com/document/product/850/103050)获取支持共享的地域。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 共享单元描述。最大128个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号，默认值：1
                     */
                    uint64_t m_shareScope;
                    bool m_shareScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDSHAREUNITREQUEST_H_
