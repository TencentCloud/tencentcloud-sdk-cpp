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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeInstances请求参数结构体
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取（查询条件）按照ckafka集群实例Id过滤
                     * @return InstanceId （查询条件）按照ckafka集群实例Id过滤
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置（查询条件）按照ckafka集群实例Id过滤
                     * @param _instanceId （查询条件）按照ckafka集群实例Id过滤
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取搜索词   ex:（查询条件）按照实例名称过滤，支持模糊查询
                     * @return SearchWord 搜索词   ex:（查询条件）按照实例名称过滤，支持模糊查询
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索词   ex:（查询条件）按照实例名称过滤，支持模糊查询
                     * @param _searchWord 搜索词   ex:（查询条件）按照实例名称过滤，支持模糊查询
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取（查询条件）实例的状态  0：创建中，1：运行中，2：删除中，5: 隔离中,  7:升级中 不填默认返回全部
                     * @return Status （查询条件）实例的状态  0：创建中，1：运行中，2：删除中，5: 隔离中,  7:升级中 不填默认返回全部
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置（查询条件）实例的状态  0：创建中，1：运行中，2：删除中，5: 隔离中,  7:升级中 不填默认返回全部
                     * @param _status （查询条件）实例的状态  0：创建中，1：运行中，2：删除中，5: 隔离中,  7:升级中 不填默认返回全部
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取偏移量，不填默认为0
                     * @return Offset 偏移量，不填默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，不填默认为0
                     * @param _offset 偏移量，不填默认为0
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
                     * 获取返回数量，不填则默认10，最大值100
                     * @return Limit 返回数量，不填则默认10，最大值100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，不填则默认10，最大值100
                     * @param _limit 返回数量，不填则默认10，最大值100
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
                     * 获取已废弃。匹配标签key值。
                     * @return TagKey 已废弃。匹配标签key值。
                     * @deprecated
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置已废弃。匹配标签key值。
                     * @param _tagKey 已废弃。匹配标签key值。
                     * @deprecated
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * @deprecated
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取（查询条件）私有网络Id
                     * @return VpcId （查询条件）私有网络Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置（查询条件）私有网络Id
                     * @param _vpcId （查询条件）私有网络Id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * （查询条件）按照ckafka集群实例Id过滤
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 搜索词   ex:（查询条件）按照实例名称过滤，支持模糊查询
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * （查询条件）实例的状态  0：创建中，1：运行中，2：删除中，5: 隔离中,  7:升级中 不填默认返回全部
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 偏移量，不填默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，不填则默认10，最大值100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 已废弃。匹配标签key值。
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * （查询条件）私有网络Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESREQUEST_H_
