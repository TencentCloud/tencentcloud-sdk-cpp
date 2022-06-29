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

#ifndef TENCENTCLOUD_CASB_V20200507_MODEL_COPYCRYPTOCOLUMNPOLICYREQUEST_H_
#define TENCENTCLOUD_CASB_V20200507_MODEL_COPYCRYPTOCOLUMNPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/casb/v20200507/model/CryptoCopyColumnPolicyTableFilter.h>


namespace TencentCloud
{
    namespace Casb
    {
        namespace V20200507
        {
            namespace Model
            {
                /**
                * CopyCryptoColumnPolicy请求参数结构体
                */
                class CopyCryptoColumnPolicyRequest : public AbstractModel
                {
                public:
                    CopyCryptoColumnPolicyRequest();
                    ~CopyCryptoColumnPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return CasbId 实例Id
                     */
                    std::string GetCasbId() const;

                    /**
                     * 设置实例Id
                     * @param CasbId 实例Id
                     */
                    void SetCasbId(const std::string& _casbId);

                    /**
                     * 判断参数 CasbId 是否已赋值
                     * @return CasbId 是否已赋值
                     */
                    bool CasbIdHasBeenSet() const;

                    /**
                     * 获取元数据id
                     * @return MetaDataId 元数据id
                     */
                    std::string GetMetaDataId() const;

                    /**
                     * 设置元数据id
                     * @param MetaDataId 元数据id
                     */
                    void SetMetaDataId(const std::string& _metaDataId);

                    /**
                     * 判断参数 MetaDataId 是否已赋值
                     * @return MetaDataId 是否已赋值
                     */
                    bool MetaDataIdHasBeenSet() const;

                    /**
                     * 获取目标实例Id 如果和实例Id相同则为同CasbId下的策略复制
                     * @return DstCasbId 目标实例Id 如果和实例Id相同则为同CasbId下的策略复制
                     */
                    std::string GetDstCasbId() const;

                    /**
                     * 设置目标实例Id 如果和实例Id相同则为同CasbId下的策略复制
                     * @param DstCasbId 目标实例Id 如果和实例Id相同则为同CasbId下的策略复制
                     */
                    void SetDstCasbId(const std::string& _dstCasbId);

                    /**
                     * 判断参数 DstCasbId 是否已赋值
                     * @return DstCasbId 是否已赋值
                     */
                    bool DstCasbIdHasBeenSet() const;

                    /**
                     * 获取目标实例Id 如果和[元数据id]相同则为同元数据下的策略复制
                     * @return DstMetaDataId 目标实例Id 如果和[元数据id]相同则为同元数据下的策略复制
                     */
                    std::string GetDstMetaDataId() const;

                    /**
                     * 设置目标实例Id 如果和[元数据id]相同则为同元数据下的策略复制
                     * @param DstMetaDataId 目标实例Id 如果和[元数据id]相同则为同元数据下的策略复制
                     */
                    void SetDstMetaDataId(const std::string& _dstMetaDataId);

                    /**
                     * 判断参数 DstMetaDataId 是否已赋值
                     * @return DstMetaDataId 是否已赋值
                     */
                    bool DstMetaDataIdHasBeenSet() const;

                    /**
                     * 获取筛选来源数据库的表
                     * @return SrcTableFilter 筛选来源数据库的表
                     */
                    std::vector<CryptoCopyColumnPolicyTableFilter> GetSrcTableFilter() const;

                    /**
                     * 设置筛选来源数据库的表
                     * @param SrcTableFilter 筛选来源数据库的表
                     */
                    void SetSrcTableFilter(const std::vector<CryptoCopyColumnPolicyTableFilter>& _srcTableFilter);

                    /**
                     * 判断参数 SrcTableFilter 是否已赋值
                     * @return SrcTableFilter 是否已赋值
                     */
                    bool SrcTableFilterHasBeenSet() const;

                    /**
                     * 获取复制同元数据下的策略，需要填写目标数据库名
                     * @return DstDatabaseName 复制同元数据下的策略，需要填写目标数据库名
                     */
                    std::string GetDstDatabaseName() const;

                    /**
                     * 设置复制同元数据下的策略，需要填写目标数据库名
                     * @param DstDatabaseName 复制同元数据下的策略，需要填写目标数据库名
                     */
                    void SetDstDatabaseName(const std::string& _dstDatabaseName);

                    /**
                     * 判断参数 DstDatabaseName 是否已赋值
                     * @return DstDatabaseName 是否已赋值
                     */
                    bool DstDatabaseNameHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_casbId;
                    bool m_casbIdHasBeenSet;

                    /**
                     * 元数据id
                     */
                    std::string m_metaDataId;
                    bool m_metaDataIdHasBeenSet;

                    /**
                     * 目标实例Id 如果和实例Id相同则为同CasbId下的策略复制
                     */
                    std::string m_dstCasbId;
                    bool m_dstCasbIdHasBeenSet;

                    /**
                     * 目标实例Id 如果和[元数据id]相同则为同元数据下的策略复制
                     */
                    std::string m_dstMetaDataId;
                    bool m_dstMetaDataIdHasBeenSet;

                    /**
                     * 筛选来源数据库的表
                     */
                    std::vector<CryptoCopyColumnPolicyTableFilter> m_srcTableFilter;
                    bool m_srcTableFilterHasBeenSet;

                    /**
                     * 复制同元数据下的策略，需要填写目标数据库名
                     */
                    std::string m_dstDatabaseName;
                    bool m_dstDatabaseNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CASB_V20200507_MODEL_COPYCRYPTOCOLUMNPOLICYREQUEST_H_
