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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_LISTKEYDETAILREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_LISTKEYDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/TagFilter.h>


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
                     * 获取含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
                     * @return Offset 含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
                     * @param _offset 含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
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
                     * 获取含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为10，最大值为200
                     * @return Limit 含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为10，最大值为200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为10，最大值为200
                     * @param _limit 含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为10，最大值为200
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
                     * 获取根据创建者角色筛选，默认 0 表示用户自己创建的cmk， 1 表示授权其它云产品自动创建的cmk
                     * @return Role 根据创建者角色筛选，默认 0 表示用户自己创建的cmk， 1 表示授权其它云产品自动创建的cmk
                     * 
                     */
                    uint64_t GetRole() const;

                    /**
                     * 设置根据创建者角色筛选，默认 0 表示用户自己创建的cmk， 1 表示授权其它云产品自动创建的cmk
                     * @param _role 根据创建者角色筛选，默认 0 表示用户自己创建的cmk， 1 表示授权其它云产品自动创建的cmk
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
                     * 获取根据CMK创建时间排序， 0 表示按照降序排序，1表示按照升序排序
                     * @return OrderType 根据CMK创建时间排序， 0 表示按照降序排序，1表示按照升序排序
                     * 
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置根据CMK创建时间排序， 0 表示按照降序排序，1表示按照升序排序
                     * @param _orderType 根据CMK创建时间排序， 0 表示按照降序排序，1表示按照升序排序
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
                     * 获取根据CMK状态筛选， 0表示全部CMK， 1 表示仅查询Enabled CMK， 2 表示仅查询Disabled CMK，3 表示查询PendingDelete 状态的CMK(处于计划删除状态的Key)，4 表示查询 PendingImport 状态的CMK，5 表示查询 Archived 状态的 CMK
                     * @return KeyState 根据CMK状态筛选， 0表示全部CMK， 1 表示仅查询Enabled CMK， 2 表示仅查询Disabled CMK，3 表示查询PendingDelete 状态的CMK(处于计划删除状态的Key)，4 表示查询 PendingImport 状态的CMK，5 表示查询 Archived 状态的 CMK
                     * 
                     */
                    uint64_t GetKeyState() const;

                    /**
                     * 设置根据CMK状态筛选， 0表示全部CMK， 1 表示仅查询Enabled CMK， 2 表示仅查询Disabled CMK，3 表示查询PendingDelete 状态的CMK(处于计划删除状态的Key)，4 表示查询 PendingImport 状态的CMK，5 表示查询 Archived 状态的 CMK
                     * @param _keyState 根据CMK状态筛选， 0表示全部CMK， 1 表示仅查询Enabled CMK， 2 表示仅查询Disabled CMK，3 表示查询PendingDelete 状态的CMK(处于计划删除状态的Key)，4 表示查询 PendingImport 状态的CMK，5 表示查询 Archived 状态的 CMK
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
                     * 获取根据KeyId或者Alias进行模糊匹配查询
                     * @return SearchKeyAlias 根据KeyId或者Alias进行模糊匹配查询
                     * 
                     */
                    std::string GetSearchKeyAlias() const;

                    /**
                     * 设置根据KeyId或者Alias进行模糊匹配查询
                     * @param _searchKeyAlias 根据KeyId或者Alias进行模糊匹配查询
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
                     * 获取根据CMK类型筛选， "TENCENT_KMS" 表示筛选密钥材料由KMS创建的CMK， "EXTERNAL" 表示筛选密钥材料需要用户导入的 EXTERNAL类型CMK，"ALL" 或者不设置表示两种类型都查询，大小写敏感。
                     * @return Origin 根据CMK类型筛选， "TENCENT_KMS" 表示筛选密钥材料由KMS创建的CMK， "EXTERNAL" 表示筛选密钥材料需要用户导入的 EXTERNAL类型CMK，"ALL" 或者不设置表示两种类型都查询，大小写敏感。
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置根据CMK类型筛选， "TENCENT_KMS" 表示筛选密钥材料由KMS创建的CMK， "EXTERNAL" 表示筛选密钥材料需要用户导入的 EXTERNAL类型CMK，"ALL" 或者不设置表示两种类型都查询，大小写敏感。
                     * @param _origin 根据CMK类型筛选， "TENCENT_KMS" 表示筛选密钥材料由KMS创建的CMK， "EXTERNAL" 表示筛选密钥材料需要用户导入的 EXTERNAL类型CMK，"ALL" 或者不设置表示两种类型都查询，大小写敏感。
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
                     * 获取根据CMK的KeyUsage筛选，ALL表示筛选全部，可使用的参数为：ALL 或 ENCRYPT_DECRYPT 或 ASYMMETRIC_DECRYPT_RSA_2048 或 ASYMMETRIC_DECRYPT_SM2 或 ASYMMETRIC_SIGN_VERIFY_SM2 或 ASYMMETRIC_SIGN_VERIFY_RSA_2048 或 ASYMMETRIC_SIGN_VERIFY_ECC，为空则默认筛选ENCRYPT_DECRYPT类型
                     * @return KeyUsage 根据CMK的KeyUsage筛选，ALL表示筛选全部，可使用的参数为：ALL 或 ENCRYPT_DECRYPT 或 ASYMMETRIC_DECRYPT_RSA_2048 或 ASYMMETRIC_DECRYPT_SM2 或 ASYMMETRIC_SIGN_VERIFY_SM2 或 ASYMMETRIC_SIGN_VERIFY_RSA_2048 或 ASYMMETRIC_SIGN_VERIFY_ECC，为空则默认筛选ENCRYPT_DECRYPT类型
                     * 
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置根据CMK的KeyUsage筛选，ALL表示筛选全部，可使用的参数为：ALL 或 ENCRYPT_DECRYPT 或 ASYMMETRIC_DECRYPT_RSA_2048 或 ASYMMETRIC_DECRYPT_SM2 或 ASYMMETRIC_SIGN_VERIFY_SM2 或 ASYMMETRIC_SIGN_VERIFY_RSA_2048 或 ASYMMETRIC_SIGN_VERIFY_ECC，为空则默认筛选ENCRYPT_DECRYPT类型
                     * @param _keyUsage 根据CMK的KeyUsage筛选，ALL表示筛选全部，可使用的参数为：ALL 或 ENCRYPT_DECRYPT 或 ASYMMETRIC_DECRYPT_RSA_2048 或 ASYMMETRIC_DECRYPT_SM2 或 ASYMMETRIC_SIGN_VERIFY_SM2 或 ASYMMETRIC_SIGN_VERIFY_RSA_2048 或 ASYMMETRIC_SIGN_VERIFY_ECC，为空则默认筛选ENCRYPT_DECRYPT类型
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
                     * 获取标签过滤条件
                     * @return TagFilters 标签过滤条件
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤条件
                     * @param _tagFilters 标签过滤条件
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
                     * 获取KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。
                     * @return HsmClusterId KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。
                     * @param _hsmClusterId KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                private:

                    /**
                     * 含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为10，最大值为200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 根据创建者角色筛选，默认 0 表示用户自己创建的cmk， 1 表示授权其它云产品自动创建的cmk
                     */
                    uint64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 根据CMK创建时间排序， 0 表示按照降序排序，1表示按照升序排序
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 根据CMK状态筛选， 0表示全部CMK， 1 表示仅查询Enabled CMK， 2 表示仅查询Disabled CMK，3 表示查询PendingDelete 状态的CMK(处于计划删除状态的Key)，4 表示查询 PendingImport 状态的CMK，5 表示查询 Archived 状态的 CMK
                     */
                    uint64_t m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * 根据KeyId或者Alias进行模糊匹配查询
                     */
                    std::string m_searchKeyAlias;
                    bool m_searchKeyAliasHasBeenSet;

                    /**
                     * 根据CMK类型筛选， "TENCENT_KMS" 表示筛选密钥材料由KMS创建的CMK， "EXTERNAL" 表示筛选密钥材料需要用户导入的 EXTERNAL类型CMK，"ALL" 或者不设置表示两种类型都查询，大小写敏感。
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 根据CMK的KeyUsage筛选，ALL表示筛选全部，可使用的参数为：ALL 或 ENCRYPT_DECRYPT 或 ASYMMETRIC_DECRYPT_RSA_2048 或 ASYMMETRIC_DECRYPT_SM2 或 ASYMMETRIC_SIGN_VERIFY_SM2 或 ASYMMETRIC_SIGN_VERIFY_RSA_2048 或 ASYMMETRIC_SIGN_VERIFY_ECC，为空则默认筛选ENCRYPT_DECRYPT类型
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * 标签过滤条件
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_LISTKEYDETAILREQUEST_H_
