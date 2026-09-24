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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_BINDVIRTUALACCOUNTRESULTDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_BINDVIRTUALACCOUNTRESULTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 绑定虚拟组结果明细项
                */
                class BindVirtualAccountResultData : public AbstractModel
                {
                public:
                    BindVirtualAccountResultData();
                    ~BindVirtualAccountResultData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>账号Id（通过AccountIdList传入时回显）</p>
                     * @return AccountId <p>账号Id（通过AccountIdList传入时回显）</p>
                     * 
                     */
                    int64_t GetAccountId() const;

                    /**
                     * 设置<p>账号Id（通过AccountIdList传入时回显）</p>
                     * @param _accountId <p>账号Id（通过AccountIdList传入时回显）</p>
                     * 
                     */
                    void SetAccountId(const int64_t& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取<p>目录ID（通过AccountUserList传入时回显，否则为0）</p>
                     * @return MenuId <p>目录ID（通过AccountUserList传入时回显，否则为0）</p>
                     * 
                     */
                    uint64_t GetMenuId() const;

                    /**
                     * 设置<p>目录ID（通过AccountUserList传入时回显，否则为0）</p>
                     * @param _menuId <p>目录ID（通过AccountUserList传入时回显，否则为0）</p>
                     * 
                     */
                    void SetMenuId(const uint64_t& _menuId);

                    /**
                     * 判断参数 MenuId 是否已赋值
                     * @return MenuId 是否已赋值
                     * 
                     */
                    bool MenuIdHasBeenSet() const;

                    /**
                     * 获取<p>失败原因，仅失败项有值：ACCOUNT_NOT_FOUND / ACCOUNT_NOT_IN_GROUP / DB_ERROR</p>
                     * @return Reason <p>失败原因，仅失败项有值：ACCOUNT_NOT_FOUND / ACCOUNT_NOT_IN_GROUP / DB_ERROR</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>失败原因，仅失败项有值：ACCOUNT_NOT_FOUND / ACCOUNT_NOT_IN_GROUP / DB_ERROR</p>
                     * @param _reason <p>失败原因，仅失败项有值：ACCOUNT_NOT_FOUND / ACCOUNT_NOT_IN_GROUP / DB_ERROR</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>登录账号（通过AccountUserList传入时回显，否则为空）</p>
                     * @return UserId <p>登录账号（通过AccountUserList传入时回显，否则为空）</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>登录账号（通过AccountUserList传入时回显，否则为空）</p>
                     * @param _userId <p>登录账号（通过AccountUserList传入时回显，否则为空）</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>账号Id（通过AccountIdList传入时回显）</p>
                     */
                    int64_t m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * <p>目录ID（通过AccountUserList传入时回显，否则为0）</p>
                     */
                    uint64_t m_menuId;
                    bool m_menuIdHasBeenSet;

                    /**
                     * <p>失败原因，仅失败项有值：ACCOUNT_NOT_FOUND / ACCOUNT_NOT_IN_GROUP / DB_ERROR</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>登录账号（通过AccountUserList传入时回显，否则为空）</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_BINDVIRTUALACCOUNTRESULTDATA_H_
