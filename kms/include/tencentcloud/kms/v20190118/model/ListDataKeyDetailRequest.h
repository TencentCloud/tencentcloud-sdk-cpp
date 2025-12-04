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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYDETAILREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYDETAILREQUEST_H_

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
                * ListDataKeyDetail请求参数结构体
                */
                class ListDataKeyDetailRequest : public AbstractModel
                {
                public:
                    ListDataKeyDetailRequest();
                    ~ListDataKeyDetailRequest() = default;
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
                     * 获取根据创建者角色筛选，默认 0 表示用户自己创建的数据密钥， 1 表示授权其它云产品自动创建的数据密钥
                     * @return Role 根据创建者角色筛选，默认 0 表示用户自己创建的数据密钥， 1 表示授权其它云产品自动创建的数据密钥
                     * 
                     */
                    uint64_t GetRole() const;

                    /**
                     * 设置根据创建者角色筛选，默认 0 表示用户自己创建的数据密钥， 1 表示授权其它云产品自动创建的数据密钥
                     * @param _role 根据创建者角色筛选，默认 0 表示用户自己创建的数据密钥， 1 表示授权其它云产品自动创建的数据密钥
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
                     * 获取根据DataKey创建时间排序， 0 表示按照降序排序，1表示按照升序排序
                     * @return OrderType 根据DataKey创建时间排序， 0 表示按照降序排序，1表示按照升序排序
                     * 
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置根据DataKey创建时间排序， 0 表示按照降序排序，1表示按照升序排序
                     * @param _orderType 根据DataKey创建时间排序， 0 表示按照降序排序，1表示按照升序排序
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
                     * 获取根据DataKey状态筛选， 0表示全部DataKey， 1 表示仅查询Enabled DataKey， 2 表示仅查询Disabled DataKey，3 表示查询PendingDelete 状态的DataKey(处于计划删除状态的Key)。
                     * @return KeyState 根据DataKey状态筛选， 0表示全部DataKey， 1 表示仅查询Enabled DataKey， 2 表示仅查询Disabled DataKey，3 表示查询PendingDelete 状态的DataKey(处于计划删除状态的Key)。
                     * 
                     */
                    uint64_t GetKeyState() const;

                    /**
                     * 设置根据DataKey状态筛选， 0表示全部DataKey， 1 表示仅查询Enabled DataKey， 2 表示仅查询Disabled DataKey，3 表示查询PendingDelete 状态的DataKey(处于计划删除状态的Key)。
                     * @param _keyState 根据DataKey状态筛选， 0表示全部DataKey， 1 表示仅查询Enabled DataKey， 2 表示仅查询Disabled DataKey，3 表示查询PendingDelete 状态的DataKey(处于计划删除状态的Key)。
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
                     * 获取根据DataKeyId或者DataKeyName进行模糊匹配查询
                     * @return SearchKeyAlias 根据DataKeyId或者DataKeyName进行模糊匹配查询
                     * 
                     */
                    std::string GetSearchKeyAlias() const;

                    /**
                     * 设置根据DataKeyId或者DataKeyName进行模糊匹配查询
                     * @param _searchKeyAlias 根据DataKeyId或者DataKeyName进行模糊匹配查询
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
                     * 获取根据DateKey类型筛选， "TENCENT_KMS" 表示筛选密钥材料由KMS创建的数据密钥， "EXTERNAL" 表示筛选密钥材料需要用户导入的 EXTERNAL类型数据密钥，"ALL" 或者不设置表示两种类型都查询，大小写敏感。
                     * @return Origin 根据DateKey类型筛选， "TENCENT_KMS" 表示筛选密钥材料由KMS创建的数据密钥， "EXTERNAL" 表示筛选密钥材料需要用户导入的 EXTERNAL类型数据密钥，"ALL" 或者不设置表示两种类型都查询，大小写敏感。
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置根据DateKey类型筛选， "TENCENT_KMS" 表示筛选密钥材料由KMS创建的数据密钥， "EXTERNAL" 表示筛选密钥材料需要用户导入的 EXTERNAL类型数据密钥，"ALL" 或者不设置表示两种类型都查询，大小写敏感。
                     * @param _origin 根据DateKey类型筛选， "TENCENT_KMS" 表示筛选密钥材料由KMS创建的数据密钥， "EXTERNAL" 表示筛选密钥材料需要用户导入的 EXTERNAL类型数据密钥，"ALL" 或者不设置表示两种类型都查询，大小写敏感。
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
                     * 获取KMS 高级版对应的 HSM 集群 ID。
                     * @return HsmClusterId KMS 高级版对应的 HSM 集群 ID。
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置KMS 高级版对应的 HSM 集群 ID。
                     * @param _hsmClusterId KMS 高级版对应的 HSM 集群 ID。
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
                     * 获取根密钥全局唯一标识符
                     * @return KeyId 根密钥全局唯一标识符
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置根密钥全局唯一标识符
                     * @param _keyId 根密钥全局唯一标识符
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取数据密钥的长度
                     * @return DataKeyLen 数据密钥的长度
                     * 
                     */
                    uint64_t GetDataKeyLen() const;

                    /**
                     * 设置数据密钥的长度
                     * @param _dataKeyLen 数据密钥的长度
                     * 
                     */
                    void SetDataKeyLen(const uint64_t& _dataKeyLen);

                    /**
                     * 判断参数 DataKeyLen 是否已赋值
                     * @return DataKeyLen 是否已赋值
                     * 
                     */
                    bool DataKeyLenHasBeenSet() const;

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
                     * 根据创建者角色筛选，默认 0 表示用户自己创建的数据密钥， 1 表示授权其它云产品自动创建的数据密钥
                     */
                    uint64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 根据DataKey创建时间排序， 0 表示按照降序排序，1表示按照升序排序
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 根据DataKey状态筛选， 0表示全部DataKey， 1 表示仅查询Enabled DataKey， 2 表示仅查询Disabled DataKey，3 表示查询PendingDelete 状态的DataKey(处于计划删除状态的Key)。
                     */
                    uint64_t m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * 根据DataKeyId或者DataKeyName进行模糊匹配查询
                     */
                    std::string m_searchKeyAlias;
                    bool m_searchKeyAliasHasBeenSet;

                    /**
                     * 根据DateKey类型筛选， "TENCENT_KMS" 表示筛选密钥材料由KMS创建的数据密钥， "EXTERNAL" 表示筛选密钥材料需要用户导入的 EXTERNAL类型数据密钥，"ALL" 或者不设置表示两种类型都查询，大小写敏感。
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * KMS 高级版对应的 HSM 集群 ID。
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * 根密钥全局唯一标识符
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 数据密钥的长度
                     */
                    uint64_t m_dataKeyLen;
                    bool m_dataKeyLenHasBeenSet;

                    /**
                     * 标签过滤条件
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYDETAILREQUEST_H_
