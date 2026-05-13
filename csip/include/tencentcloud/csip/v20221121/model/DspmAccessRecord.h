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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCESSRECORD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCESSRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmDbAsset.h>
#include <tencentcloud/csip/v20221121/model/DspmAssetAccount.h>
#include <tencentcloud/csip/v20221121/model/DspmIp.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm访问记录
                */
                class DspmAccessRecord : public AbstractModel
                {
                public:
                    DspmAccessRecord();
                    ~DspmAccessRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产信息
                     * @return Asset 资产信息
                     * 
                     */
                    DspmDbAsset GetAsset() const;

                    /**
                     * 设置资产信息
                     * @param _asset 资产信息
                     * 
                     */
                    void SetAsset(const DspmDbAsset& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取账号
                     * @return Accounts 账号
                     * 
                     */
                    std::vector<DspmAssetAccount> GetAccounts() const;

                    /**
                     * 设置账号
                     * @param _accounts 账号
                     * 
                     */
                    void SetAccounts(const std::vector<DspmAssetAccount>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取来源ip信息
                     * @return SourceIpList 来源ip信息
                     * 
                     */
                    std::vector<DspmIp> GetSourceIpList() const;

                    /**
                     * 设置来源ip信息
                     * @param _sourceIpList 来源ip信息
                     * 
                     */
                    void SetSourceIpList(const std::vector<DspmIp>& _sourceIpList);

                    /**
                     * 判断参数 SourceIpList 是否已赋值
                     * @return SourceIpList 是否已赋值
                     * 
                     */
                    bool SourceIpListHasBeenSet() const;

                    /**
                     * 获取记录时间
                     * @return RecordTime 记录时间
                     * 
                     */
                    std::string GetRecordTime() const;

                    /**
                     * 设置记录时间
                     * @param _recordTime 记录时间
                     * 
                     */
                    void SetRecordTime(const std::string& _recordTime);

                    /**
                     * 判断参数 RecordTime 是否已赋值
                     * @return RecordTime 是否已赋值
                     * 
                     */
                    bool RecordTimeHasBeenSet() const;

                    /**
                     * 获取登录成功次数
                     * @return LoginSuccessCount 登录成功次数
                     * 
                     */
                    int64_t GetLoginSuccessCount() const;

                    /**
                     * 设置登录成功次数
                     * @param _loginSuccessCount 登录成功次数
                     * 
                     */
                    void SetLoginSuccessCount(const int64_t& _loginSuccessCount);

                    /**
                     * 判断参数 LoginSuccessCount 是否已赋值
                     * @return LoginSuccessCount 是否已赋值
                     * 
                     */
                    bool LoginSuccessCountHasBeenSet() const;

                    /**
                     * 获取登录失败次数
                     * @return LoginFailedCount 登录失败次数
                     * 
                     */
                    int64_t GetLoginFailedCount() const;

                    /**
                     * 设置登录失败次数
                     * @param _loginFailedCount 登录失败次数
                     * 
                     */
                    void SetLoginFailedCount(const int64_t& _loginFailedCount);

                    /**
                     * 判断参数 LoginFailedCount 是否已赋值
                     * @return LoginFailedCount 是否已赋值
                     * 
                     */
                    bool LoginFailedCountHasBeenSet() const;

                private:

                    /**
                     * 资产信息
                     */
                    DspmDbAsset m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * 账号
                     */
                    std::vector<DspmAssetAccount> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * 来源ip信息
                     */
                    std::vector<DspmIp> m_sourceIpList;
                    bool m_sourceIpListHasBeenSet;

                    /**
                     * 记录时间
                     */
                    std::string m_recordTime;
                    bool m_recordTimeHasBeenSet;

                    /**
                     * 登录成功次数
                     */
                    int64_t m_loginSuccessCount;
                    bool m_loginSuccessCountHasBeenSet;

                    /**
                     * 登录失败次数
                     */
                    int64_t m_loginFailedCount;
                    bool m_loginFailedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCESSRECORD_H_
