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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBECOPYPAIRSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBECOPYPAIRSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/FilterModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeCopyPairs请求参数结构体
                */
                class DescribeCopyPairsRequest : public AbstractModel
                {
                public:
                    DescribeCopyPairsRequest();
                    ~DescribeCopyPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>要查询复制对的类型，可选值：DISK、INSTANCE、CFS</p>
                     * @return CopyPairType <p>要查询复制对的类型，可选值：DISK、INSTANCE、CFS</p>
                     * 
                     */
                    std::string GetCopyPairType() const;

                    /**
                     * 设置<p>要查询复制对的类型，可选值：DISK、INSTANCE、CFS</p>
                     * @param _copyPairType <p>要查询复制对的类型，可选值：DISK、INSTANCE、CFS</p>
                     * 
                     */
                    void SetCopyPairType(const std::string& _copyPairType);

                    /**
                     * 判断参数 CopyPairType 是否已赋值
                     * @return CopyPairType 是否已赋值
                     * 
                     */
                    bool CopyPairTypeHasBeenSet() const;

                    /**
                     * 获取<p>要查询复制对ID列表</p>
                     * @return CopyPairIds <p>要查询复制对ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetCopyPairIds() const;

                    /**
                     * 设置<p>要查询复制对ID列表</p>
                     * @param _copyPairIds <p>要查询复制对ID列表</p>
                     * 
                     */
                    void SetCopyPairIds(const std::vector<std::string>& _copyPairIds);

                    /**
                     * 判断参数 CopyPairIds 是否已赋值
                     * @return CopyPairIds 是否已赋值
                     * 
                     */
                    bool CopyPairIdsHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，详见过滤条件表。支持的Name：disaster-recovery-site-pair-id、target-resource-id、source-resource-id、copy-pair-id、copy-pair-name</p>
                     * @return Filters <p>过滤条件，详见过滤条件表。支持的Name：disaster-recovery-site-pair-id、target-resource-id、source-resource-id、copy-pair-id、copy-pair-name</p>
                     * 
                     */
                    std::vector<FilterModel> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，详见过滤条件表。支持的Name：disaster-recovery-site-pair-id、target-resource-id、source-resource-id、copy-pair-id、copy-pair-name</p>
                     * @param _filters <p>过滤条件，详见过滤条件表。支持的Name：disaster-recovery-site-pair-id、target-resource-id、source-resource-id、copy-pair-id、copy-pair-name</p>
                     * 
                     */
                    void SetFilters(const std::vector<FilterModel>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节</p>
                     * @return Offset <p>偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节</p>
                     * @param _offset <p>偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认为20，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>输出结果按升序还是降序，可选值：ASC、DESC</p>
                     * @return Order <p>输出结果按升序还是降序，可选值：ASC、DESC</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>输出结果按升序还是降序，可选值：ASC、DESC</p>
                     * @param _order <p>输出结果按升序还是降序，可选值：ASC、DESC</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>输出结果的排序字段，可选值：CREATE_TIME</p>
                     * @return OrderField <p>输出结果的排序字段，可选值：CREATE_TIME</p>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置<p>输出结果的排序字段，可选值：CREATE_TIME</p>
                     * @param _orderField <p>输出结果的排序字段，可选值：CREATE_TIME</p>
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取<p>是否要查询保护时间点列表，默认 false。当设置为 true 时，必须同时传入 CopyPairIds 参数。</p>
                     * @return QueryProtectionTime <p>是否要查询保护时间点列表，默认 false。当设置为 true 时，必须同时传入 CopyPairIds 参数。</p>
                     * 
                     */
                    bool GetQueryProtectionTime() const;

                    /**
                     * 设置<p>是否要查询保护时间点列表，默认 false。当设置为 true 时，必须同时传入 CopyPairIds 参数。</p>
                     * @param _queryProtectionTime <p>是否要查询保护时间点列表，默认 false。当设置为 true 时，必须同时传入 CopyPairIds 参数。</p>
                     * 
                     */
                    void SetQueryProtectionTime(const bool& _queryProtectionTime);

                    /**
                     * 判断参数 QueryProtectionTime 是否已赋值
                     * @return QueryProtectionTime 是否已赋值
                     * 
                     */
                    bool QueryProtectionTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否查询跨云+非跨云全部复制对，默认 false</p>
                     * @return GetAllCopyPair <p>是否查询跨云+非跨云全部复制对，默认 false</p>
                     * 
                     */
                    bool GetGetAllCopyPair() const;

                    /**
                     * 设置<p>是否查询跨云+非跨云全部复制对，默认 false</p>
                     * @param _getAllCopyPair <p>是否查询跨云+非跨云全部复制对，默认 false</p>
                     * 
                     */
                    void SetGetAllCopyPair(const bool& _getAllCopyPair);

                    /**
                     * 判断参数 GetAllCopyPair 是否已赋值
                     * @return GetAllCopyPair 是否已赋值
                     * 
                     */
                    bool GetAllCopyPairHasBeenSet() const;

                    /**
                     * 获取<p>是否要查询 CVM 创建参数（仅对延迟创建模式且目标 CVM 未创建的复制对生效），默认为true。为 true 时，每条 deferred_create=1 AND target_cvm_created=0 的 CVM 复制对出参会附带 CvmCreateParams 字段</p>
                     * @return QueryCvmCreateParams <p>是否要查询 CVM 创建参数（仅对延迟创建模式且目标 CVM 未创建的复制对生效），默认为true。为 true 时，每条 deferred_create=1 AND target_cvm_created=0 的 CVM 复制对出参会附带 CvmCreateParams 字段</p>
                     * 
                     */
                    bool GetQueryCvmCreateParams() const;

                    /**
                     * 设置<p>是否要查询 CVM 创建参数（仅对延迟创建模式且目标 CVM 未创建的复制对生效），默认为true。为 true 时，每条 deferred_create=1 AND target_cvm_created=0 的 CVM 复制对出参会附带 CvmCreateParams 字段</p>
                     * @param _queryCvmCreateParams <p>是否要查询 CVM 创建参数（仅对延迟创建模式且目标 CVM 未创建的复制对生效），默认为true。为 true 时，每条 deferred_create=1 AND target_cvm_created=0 的 CVM 复制对出参会附带 CvmCreateParams 字段</p>
                     * 
                     */
                    void SetQueryCvmCreateParams(const bool& _queryCvmCreateParams);

                    /**
                     * 判断参数 QueryCvmCreateParams 是否已赋值
                     * @return QueryCvmCreateParams 是否已赋值
                     * 
                     */
                    bool QueryCvmCreateParamsHasBeenSet() const;

                    /**
                     * 获取<p>复制对创建来源过滤。不传则查询所有；传 LOCAL 仅查本端创建的复制对，传 PEER 仅查对端创建的复制对。</p><p>枚举值：</p><ul><li>LOCAL： 仅查本端创建的复制对</li><li>PEER： 仅查对端创建的复制对</li></ul>
                     * @return CreateFrom <p>复制对创建来源过滤。不传则查询所有；传 LOCAL 仅查本端创建的复制对，传 PEER 仅查对端创建的复制对。</p><p>枚举值：</p><ul><li>LOCAL： 仅查本端创建的复制对</li><li>PEER： 仅查对端创建的复制对</li></ul>
                     * 
                     */
                    std::string GetCreateFrom() const;

                    /**
                     * 设置<p>复制对创建来源过滤。不传则查询所有；传 LOCAL 仅查本端创建的复制对，传 PEER 仅查对端创建的复制对。</p><p>枚举值：</p><ul><li>LOCAL： 仅查本端创建的复制对</li><li>PEER： 仅查对端创建的复制对</li></ul>
                     * @param _createFrom <p>复制对创建来源过滤。不传则查询所有；传 LOCAL 仅查本端创建的复制对，传 PEER 仅查对端创建的复制对。</p><p>枚举值：</p><ul><li>LOCAL： 仅查本端创建的复制对</li><li>PEER： 仅查对端创建的复制对</li></ul>
                     * 
                     */
                    void SetCreateFrom(const std::string& _createFrom);

                    /**
                     * 判断参数 CreateFrom 是否已赋值
                     * @return CreateFrom 是否已赋值
                     * 
                     */
                    bool CreateFromHasBeenSet() const;

                private:

                    /**
                     * <p>要查询复制对的类型，可选值：DISK、INSTANCE、CFS</p>
                     */
                    std::string m_copyPairType;
                    bool m_copyPairTypeHasBeenSet;

                    /**
                     * <p>要查询复制对ID列表</p>
                     */
                    std::vector<std::string> m_copyPairIds;
                    bool m_copyPairIdsHasBeenSet;

                    /**
                     * <p>过滤条件，详见过滤条件表。支持的Name：disaster-recovery-site-pair-id、target-resource-id、source-resource-id、copy-pair-id、copy-pair-name</p>
                     */
                    std::vector<FilterModel> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>输出结果按升序还是降序，可选值：ASC、DESC</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>输出结果的排序字段，可选值：CREATE_TIME</p>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * <p>是否要查询保护时间点列表，默认 false。当设置为 true 时，必须同时传入 CopyPairIds 参数。</p>
                     */
                    bool m_queryProtectionTime;
                    bool m_queryProtectionTimeHasBeenSet;

                    /**
                     * <p>是否查询跨云+非跨云全部复制对，默认 false</p>
                     */
                    bool m_getAllCopyPair;
                    bool m_getAllCopyPairHasBeenSet;

                    /**
                     * <p>是否要查询 CVM 创建参数（仅对延迟创建模式且目标 CVM 未创建的复制对生效），默认为true。为 true 时，每条 deferred_create=1 AND target_cvm_created=0 的 CVM 复制对出参会附带 CvmCreateParams 字段</p>
                     */
                    bool m_queryCvmCreateParams;
                    bool m_queryCvmCreateParamsHasBeenSet;

                    /**
                     * <p>复制对创建来源过滤。不传则查询所有；传 LOCAL 仅查本端创建的复制对，传 PEER 仅查对端创建的复制对。</p><p>枚举值：</p><ul><li>LOCAL： 仅查本端创建的复制对</li><li>PEER： 仅查对端创建的复制对</li></ul>
                     */
                    std::string m_createFrom;
                    bool m_createFromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBECOPYPAIRSREQUEST_H_
