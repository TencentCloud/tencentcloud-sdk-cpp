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
                     * 获取订单号
                     * @return DealName 订单号
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置订单号
                     * @param _dealName 订单号
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
                     * 获取可选参数: 1专业版-包年包月 , 2 旗舰版-包年包月
                     * @return LicenseType 可选参数: 1专业版-包年包月 , 2 旗舰版-包年包月
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置可选参数: 1专业版-包年包月 , 2 旗舰版-包年包月
                     * @param _licenseType 可选参数: 1专业版-包年包月 , 2 旗舰版-包年包月
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
                     * 获取机器列表
                     * @return QuuidList 机器列表
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置机器列表
                     * @param _quuidList 机器列表
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
                     * 获取是否全选机器
                     * @return IsAll 是否全选机器
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置是否全选机器
                     * @param _isAll 是否全选机器
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
                     * 订单号
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 可选参数: 1专业版-包年包月 , 2 旗舰版-包年包月
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 机器列表
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                    /**
                     * 是否全选机器
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBUYBINDTASKREQUEST_H_
