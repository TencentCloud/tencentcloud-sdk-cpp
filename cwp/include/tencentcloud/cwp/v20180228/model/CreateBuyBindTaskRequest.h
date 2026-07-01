/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBUYBINDTASKREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBUYBINDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateBuyBindTask请求参数结构体
                */
                class CreateBuyBindTaskRequest : public AbstractModel
                {
                public:
                    CreateBuyBindTaskRequest();
                    ~CreateBuyBindTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>订单号</p>
                     * @return DealName <p>订单号</p>
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置<p>订单号</p>
                     * @param _dealName <p>订单号</p>
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取<p>授权类型</p><p>枚举值：</p><ul><li>1： 专业版-包年包月</li><li>2： 旗舰版-包年包月</li></ul>
                     * @return LicenseType <p>授权类型</p><p>枚举值：</p><ul><li>1： 专业版-包年包月</li><li>2： 旗舰版-包年包月</li></ul>
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置<p>授权类型</p><p>枚举值：</p><ul><li>1： 专业版-包年包月</li><li>2： 旗舰版-包年包月</li></ul>
                     * @param _licenseType <p>授权类型</p><p>枚举值：</p><ul><li>1： 专业版-包年包月</li><li>2： 旗舰版-包年包月</li></ul>
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取<p>机器列表</p>
                     * @return QuuidList <p>机器列表</p>
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置<p>机器列表</p>
                     * @param _quuidList <p>机器列表</p>
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                    /**
                     * 获取<p>是否全选机器</p>
                     * @return IsAll <p>是否全选机器</p>
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置<p>是否全选机器</p>
                     * @param _isAll <p>是否全选机器</p>
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                private:

                    /**
                     * <p>订单号</p>
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * <p>授权类型</p><p>枚举值：</p><ul><li>1： 专业版-包年包月</li><li>2： 旗舰版-包年包月</li></ul>
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>机器列表</p>
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                    /**
                     * <p>是否全选机器</p>
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBUYBINDTASKREQUEST_H_
