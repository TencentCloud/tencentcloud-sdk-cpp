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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUP_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 容灾组信息
                */
                class DisasterRecoverGroup : public AbstractModel
                {
                public:
                    DisasterRecoverGroup();
                    ~DisasterRecoverGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分散置放群组id。</p>
                     * @return DisasterRecoverGroupId <p>分散置放群组id。</p>
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置<p>分散置放群组id。</p>
                     * @param _disasterRecoverGroupId <p>分散置放群组id。</p>
                     * 
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组名称，长度1-60个字符。</p>
                     * @return Name <p>分散置放群组名称，长度1-60个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>分散置放群组名称，长度1-60个字符。</p>
                     * @param _name <p>分散置放群组名称，长度1-60个字符。</p>
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
                     * 获取<p>分散置放群组类型，取值范围：<br></p><li>HOST：物理机<br></li><li>SW：交换机<br></li><li>RACK：机架</li>
                     * @return Type <p>分散置放群组类型，取值范围：<br></p><li>HOST：物理机<br></li><li>SW：交换机<br></li><li>RACK：机架</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>分散置放群组类型，取值范围：<br></p><li>HOST：物理机<br></li><li>SW：交换机<br></li><li>RACK：机架</li>
                     * @param _type <p>分散置放群组类型，取值范围：<br></p><li>HOST：物理机<br></li><li>SW：交换机<br></li><li>RACK：机架</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组内最大容纳云服务器数量。</p>
                     * @return CvmQuotaTotal <p>分散置放群组内最大容纳云服务器数量。</p>
                     * 
                     */
                    int64_t GetCvmQuotaTotal() const;

                    /**
                     * 设置<p>分散置放群组内最大容纳云服务器数量。</p>
                     * @param _cvmQuotaTotal <p>分散置放群组内最大容纳云服务器数量。</p>
                     * 
                     */
                    void SetCvmQuotaTotal(const int64_t& _cvmQuotaTotal);

                    /**
                     * 判断参数 CvmQuotaTotal 是否已赋值
                     * @return CvmQuotaTotal 是否已赋值
                     * 
                     */
                    bool CvmQuotaTotalHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组内云服务器当前数量。</p>
                     * @return CurrentNum <p>分散置放群组内云服务器当前数量。</p>
                     * 
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 设置<p>分散置放群组内云服务器当前数量。</p>
                     * @param _currentNum <p>分散置放群组内云服务器当前数量。</p>
                     * 
                     */
                    void SetCurrentNum(const int64_t& _currentNum);

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     * 
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组内，云服务器id列表。</p>
                     * @return InstanceIds <p>分散置放群组内，云服务器id列表。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>分散置放群组内，云服务器id列表。</p>
                     * @param _instanceIds <p>分散置放群组内，云服务器id列表。</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     * @return CreateTime <p>分散置放群组创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>分散置放群组创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     * @param _createTime <p>分散置放群组创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>置放群组亲和度</p>
                     * @return Affinity <p>置放群组亲和度</p>
                     * 
                     */
                    int64_t GetAffinity() const;

                    /**
                     * 设置<p>置放群组亲和度</p>
                     * @param _affinity <p>置放群组亲和度</p>
                     * 
                     */
                    void SetAffinity(const int64_t& _affinity);

                    /**
                     * 判断参数 Affinity 是否已赋值
                     * @return Affinity 是否已赋值
                     * 
                     */
                    bool AffinityHasBeenSet() const;

                    /**
                     * 获取<p>置放群组类型，当前支持两种；分散置放群组和分区置放群组(功能灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组</p>
                     * @return Strategy <p>置放群组类型，当前支持两种；分散置放群组和分区置放群组(功能灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组</p>
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置<p>置放群组类型，当前支持两种；分散置放群组和分区置放群组(功能灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组</p>
                     * @param _strategy <p>置放群组类型，当前支持两种；分散置放群组和分区置放群组(功能灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组</p>
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取<p>分区置放群组的分区数量，如果是分区置放群组会返回(功能灰度中)</p>
                     * @return PartitionCount <p>分区置放群组的分区数量，如果是分区置放群组会返回(功能灰度中)</p>
                     * 
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置<p>分区置放群组的分区数量，如果是分区置放群组会返回(功能灰度中)</p>
                     * @param _partitionCount <p>分区置放群组的分区数量，如果是分区置放群组会返回(功能灰度中)</p>
                     * 
                     */
                    void SetPartitionCount(const int64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取<p>置放群组关联的标签列表。</p>
                     * @return Tags <p>置放群组关联的标签列表。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>置放群组关联的标签列表。</p>
                     * @param _tags <p>置放群组关联的标签列表。</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>分散置放群组id。</p>
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * <p>分散置放群组名称，长度1-60个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>分散置放群组类型，取值范围：<br></p><li>HOST：物理机<br></li><li>SW：交换机<br></li><li>RACK：机架</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>分散置放群组内最大容纳云服务器数量。</p>
                     */
                    int64_t m_cvmQuotaTotal;
                    bool m_cvmQuotaTotalHasBeenSet;

                    /**
                     * <p>分散置放群组内云服务器当前数量。</p>
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * <p>分散置放群组内，云服务器id列表。</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>分散置放群组创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>置放群组亲和度</p>
                     */
                    int64_t m_affinity;
                    bool m_affinityHasBeenSet;

                    /**
                     * <p>置放群组类型，当前支持两种；分散置放群组和分区置放群组(功能灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组</p>
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * <p>分区置放群组的分区数量，如果是分区置放群组会返回(功能灰度中)</p>
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * <p>置放群组关联的标签列表。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUP_H_
