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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_LISTKEYDETAILREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_LISTKEYDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/TagFilter.h>
#include <tencentcloud/kms/v20190118/model/MemberAccount.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ListKeyDetail请求参数结构体
                */
                class ListKeyDetailRequest : public AbstractModel
                {
                public:
                    ListKeyDetailRequest();
                    ~ListKeyDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0</p>
                     * @return Offset <p>含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0</p>
                     * @param _offset <p>含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为10，最大值为200</p>
                     * @return Limit <p>含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为10，最大值为200</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为10，最大值为200</p>
                     * @param _limit <p>含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为10，最大值为200</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>根据创建者角色筛选，默认 0 表示用户自己创建的cmk， 1 表示授权其它云产品自动创建的cmk</p>
                     * @return Role <p>根据创建者角色筛选，默认 0 表示用户自己创建的cmk， 1 表示授权其它云产品自动创建的cmk</p>
                     * 
                     */
                    uint64_t GetRole() const;

                    /**
                     * 设置<p>根据创建者角色筛选，默认 0 表示用户自己创建的cmk， 1 表示授权其它云产品自动创建的cmk</p>
                     * @param _role <p>根据创建者角色筛选，默认 0 表示用户自己创建的cmk， 1 表示授权其它云产品自动创建的cmk</p>
                     * 
                     */
                    void SetRole(const uint64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取<p>根据CMK创建时间排序， 0 表示按照降序排序，1表示按照升序排序</p>
                     * @return OrderType <p>根据CMK创建时间排序， 0 表示按照降序排序，1表示按照升序排序</p>
                     * 
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置<p>根据CMK创建时间排序， 0 表示按照降序排序，1表示按照升序排序</p>
                     * @param _orderType <p>根据CMK创建时间排序， 0 表示按照降序排序，1表示按照升序排序</p>
                     * 
                     */
                    void SetOrderType(const uint64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>根据CMK状态筛选， 0表示全部CMK， 1 表示仅查询Enabled CMK， 2 表示仅查询Disabled CMK，3 表示查询PendingDelete 状态的CMK(处于计划删除状态的Key)，4 表示查询 PendingImport 状态的CMK，5 表示查询 Archived 状态的 CMK</p>
                     * @return KeyState <p>根据CMK状态筛选， 0表示全部CMK， 1 表示仅查询Enabled CMK， 2 表示仅查询Disabled CMK，3 表示查询PendingDelete 状态的CMK(处于计划删除状态的Key)，4 表示查询 PendingImport 状态的CMK，5 表示查询 Archived 状态的 CMK</p>
                     * 
                     */
                    uint64_t GetKeyState() const;

                    /**
                     * 设置<p>根据CMK状态筛选， 0表示全部CMK， 1 表示仅查询Enabled CMK， 2 表示仅查询Disabled CMK，3 表示查询PendingDelete 状态的CMK(处于计划删除状态的Key)，4 表示查询 PendingImport 状态的CMK，5 表示查询 Archived 状态的 CMK</p>
                     * @param _keyState <p>根据CMK状态筛选， 0表示全部CMK， 1 表示仅查询Enabled CMK， 2 表示仅查询Disabled CMK，3 表示查询PendingDelete 状态的CMK(处于计划删除状态的Key)，4 表示查询 PendingImport 状态的CMK，5 表示查询 Archived 状态的 CMK</p>
                     * 
                     */
                    void SetKeyState(const uint64_t& _keyState);

                    /**
                     * 判断参数 KeyState 是否已赋值
                     * @return KeyState 是否已赋值
                     * 
                     */
                    bool KeyStateHasBeenSet() const;

                    /**
                     * 获取<p>根据KeyId或者Alias进行模糊匹配查询</p>
                     * @return SearchKeyAlias <p>根据KeyId或者Alias进行模糊匹配查询</p>
                     * 
                     */
                    std::string GetSearchKeyAlias() const;

                    /**
                     * 设置<p>根据KeyId或者Alias进行模糊匹配查询</p>
                     * @param _searchKeyAlias <p>根据KeyId或者Alias进行模糊匹配查询</p>
                     * 
                     */
                    void SetSearchKeyAlias(const std::string& _searchKeyAlias);

                    /**
                     * 判断参数 SearchKeyAlias 是否已赋值
                     * @return SearchKeyAlias 是否已赋值
                     * 
                     */
                    bool SearchKeyAliasHasBeenSet() const;

                    /**
                     * 获取<p>根据CMK类型筛选， &quot;TENCENT_KMS&quot; 表示筛选密钥材料由KMS创建的CMK， &quot;EXTERNAL&quot; 表示筛选密钥材料需要用户导入的 EXTERNAL类型CMK，&quot;ALL&quot; 或者不设置表示两种类型都查询，大小写敏感。</p>
                     * @return Origin <p>根据CMK类型筛选， &quot;TENCENT_KMS&quot; 表示筛选密钥材料由KMS创建的CMK， &quot;EXTERNAL&quot; 表示筛选密钥材料需要用户导入的 EXTERNAL类型CMK，&quot;ALL&quot; 或者不设置表示两种类型都查询，大小写敏感。</p>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置<p>根据CMK类型筛选， &quot;TENCENT_KMS&quot; 表示筛选密钥材料由KMS创建的CMK， &quot;EXTERNAL&quot; 表示筛选密钥材料需要用户导入的 EXTERNAL类型CMK，&quot;ALL&quot; 或者不设置表示两种类型都查询，大小写敏感。</p>
                     * @param _origin <p>根据CMK类型筛选， &quot;TENCENT_KMS&quot; 表示筛选密钥材料由KMS创建的CMK， &quot;EXTERNAL&quot; 表示筛选密钥材料需要用户导入的 EXTERNAL类型CMK，&quot;ALL&quot; 或者不设置表示两种类型都查询，大小写敏感。</p>
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取<p>根据CMK的KeyUsage筛选，ALL表示筛选全部，可使用的参数为：ALL 或 ENCRYPT_DECRYPT 或 ASYMMETRIC_DECRYPT_RSA_2048 或 ASYMMETRIC_DECRYPT_SM2 或 ASYMMETRIC_SIGN_VERIFY_SM2 或 ASYMMETRIC_SIGN_VERIFY_RSA_2048 或 ASYMMETRIC_SIGN_VERIFY_ECC，为空则默认筛选ENCRYPT_DECRYPT类型</p>
                     * @return KeyUsage <p>根据CMK的KeyUsage筛选，ALL表示筛选全部，可使用的参数为：ALL 或 ENCRYPT_DECRYPT 或 ASYMMETRIC_DECRYPT_RSA_2048 或 ASYMMETRIC_DECRYPT_SM2 或 ASYMMETRIC_SIGN_VERIFY_SM2 或 ASYMMETRIC_SIGN_VERIFY_RSA_2048 或 ASYMMETRIC_SIGN_VERIFY_ECC，为空则默认筛选ENCRYPT_DECRYPT类型</p>
                     * 
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置<p>根据CMK的KeyUsage筛选，ALL表示筛选全部，可使用的参数为：ALL 或 ENCRYPT_DECRYPT 或 ASYMMETRIC_DECRYPT_RSA_2048 或 ASYMMETRIC_DECRYPT_SM2 或 ASYMMETRIC_SIGN_VERIFY_SM2 或 ASYMMETRIC_SIGN_VERIFY_RSA_2048 或 ASYMMETRIC_SIGN_VERIFY_ECC，为空则默认筛选ENCRYPT_DECRYPT类型</p>
                     * @param _keyUsage <p>根据CMK的KeyUsage筛选，ALL表示筛选全部，可使用的参数为：ALL 或 ENCRYPT_DECRYPT 或 ASYMMETRIC_DECRYPT_RSA_2048 或 ASYMMETRIC_DECRYPT_SM2 或 ASYMMETRIC_SIGN_VERIFY_SM2 或 ASYMMETRIC_SIGN_VERIFY_RSA_2048 或 ASYMMETRIC_SIGN_VERIFY_ECC，为空则默认筛选ENCRYPT_DECRYPT类型</p>
                     * 
                     */
                    void SetKeyUsage(const std::string& _keyUsage);

                    /**
                     * 判断参数 KeyUsage 是否已赋值
                     * @return KeyUsage 是否已赋值
                     * 
                     */
                    bool KeyUsageHasBeenSet() const;

                    /**
                     * 获取<p>标签过滤条件</p>
                     * @return TagFilters <p>标签过滤条件</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置<p>标签过滤条件</p>
                     * @param _tagFilters <p>标签过滤条件</p>
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取<p>KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。当指定集群ID时查询集群的密钥列表；当指定default时,查询公有云共享版的密钥列表；当为空，默认查询所有的密钥列表包括集群和非集群。</p>
                     * @return HsmClusterId <p>KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。当指定集群ID时查询集群的密钥列表；当指定default时,查询公有云共享版的密钥列表；当为空，默认查询所有的密钥列表包括集群和非集群。</p>
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置<p>KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。当指定集群ID时查询集群的密钥列表；当指定default时,查询公有云共享版的密钥列表；当为空，默认查询所有的密钥列表包括集群和非集群。</p>
                     * @param _hsmClusterId <p>KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。当指定集群ID时查询集群的密钥列表；当指定default时,查询公有云共享版的密钥列表；当为空，默认查询所有的密钥列表包括集群和非集群。</p>
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>可信服务成员账号信息数组</p>
                     * @return MemberAccounts <p>可信服务成员账号信息数组</p>
                     * 
                     */
                    std::vector<MemberAccount> GetMemberAccounts() const;

                    /**
                     * 设置<p>可信服务成员账号信息数组</p>
                     * @param _memberAccounts <p>可信服务成员账号信息数组</p>
                     * 
                     */
                    void SetMemberAccounts(const std::vector<MemberAccount>& _memberAccounts);

                    /**
                     * 判断参数 MemberAccounts 是否已赋值
                     * @return MemberAccounts 是否已赋值
                     * 
                     */
                    bool MemberAccountsHasBeenSet() const;

                private:

                    /**
                     * <p>含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为10，最大值为200</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>根据创建者角色筛选，默认 0 表示用户自己创建的cmk， 1 表示授权其它云产品自动创建的cmk</p>
                     */
                    uint64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>根据CMK创建时间排序， 0 表示按照降序排序，1表示按照升序排序</p>
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>根据CMK状态筛选， 0表示全部CMK， 1 表示仅查询Enabled CMK， 2 表示仅查询Disabled CMK，3 表示查询PendingDelete 状态的CMK(处于计划删除状态的Key)，4 表示查询 PendingImport 状态的CMK，5 表示查询 Archived 状态的 CMK</p>
                     */
                    uint64_t m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * <p>根据KeyId或者Alias进行模糊匹配查询</p>
                     */
                    std::string m_searchKeyAlias;
                    bool m_searchKeyAliasHasBeenSet;

                    /**
                     * <p>根据CMK类型筛选， &quot;TENCENT_KMS&quot; 表示筛选密钥材料由KMS创建的CMK， &quot;EXTERNAL&quot; 表示筛选密钥材料需要用户导入的 EXTERNAL类型CMK，&quot;ALL&quot; 或者不设置表示两种类型都查询，大小写敏感。</p>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * <p>根据CMK的KeyUsage筛选，ALL表示筛选全部，可使用的参数为：ALL 或 ENCRYPT_DECRYPT 或 ASYMMETRIC_DECRYPT_RSA_2048 或 ASYMMETRIC_DECRYPT_SM2 或 ASYMMETRIC_SIGN_VERIFY_SM2 或 ASYMMETRIC_SIGN_VERIFY_RSA_2048 或 ASYMMETRIC_SIGN_VERIFY_ECC，为空则默认筛选ENCRYPT_DECRYPT类型</p>
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * <p>标签过滤条件</p>
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * <p>KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。当指定集群ID时查询集群的密钥列表；当指定default时,查询公有云共享版的密钥列表；当为空，默认查询所有的密钥列表包括集群和非集群。</p>
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * <p>可信服务成员账号信息数组</p>
                     */
                    std::vector<MemberAccount> m_memberAccounts;
                    bool m_memberAccountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_LISTKEYDETAILREQUEST_H_
