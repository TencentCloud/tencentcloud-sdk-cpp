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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBENODEGROUPSREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBENODEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeNodeGroups请求参数结构体
                */
                class DescribeNodeGroupsRequest : public AbstractModel
                {
                public:
                    DescribeNodeGroupsRequest();
                    ~DescribeNodeGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>节点类型。0: 全部 1: IDC 2: LastMile 3: Mobile，不填默认为0</p>
                     * @return NodeType <p>节点类型。0: 全部 1: IDC 2: LastMile 3: Mobile，不填默认为0</p>
                     * 
                     */
                    std::vector<int64_t> GetNodeType() const;

                    /**
                     * 设置<p>节点类型。0: 全部 1: IDC 2: LastMile 3: Mobile，不填默认为0</p>
                     * @param _nodeType <p>节点类型。0: 全部 1: IDC 2: LastMile 3: Mobile，不填默认为0</p>
                     * 
                     */
                    void SetNodeType(const std::vector<int64_t>& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>节点分类。0: 全部 1: PC 2：Mobile，不填默认为0。PC分类包括IDC和LM节点类型，Mobile分类包括Mobile节点类型。与NodeType参数取交集。</p>
                     * @return TaskCategory <p>节点分类。0: 全部 1: PC 2：Mobile，不填默认为0。PC分类包括IDC和LM节点类型，Mobile分类包括Mobile节点类型。与NodeType参数取交集。</p>
                     * 
                     */
                    int64_t GetTaskCategory() const;

                    /**
                     * 设置<p>节点分类。0: 全部 1: PC 2：Mobile，不填默认为0。PC分类包括IDC和LM节点类型，Mobile分类包括Mobile节点类型。与NodeType参数取交集。</p>
                     * @param _taskCategory <p>节点分类。0: 全部 1: PC 2：Mobile，不填默认为0。PC分类包括IDC和LM节点类型，Mobile分类包括Mobile节点类型。与NodeType参数取交集。</p>
                     * 
                     */
                    void SetTaskCategory(const int64_t& _taskCategory);

                    /**
                     * 判断参数 TaskCategory 是否已赋值
                     * @return TaskCategory 是否已赋值
                     * 
                     */
                    bool TaskCategoryHasBeenSet() const;

                    /**
                     * 获取<p>IP类型。0: 全部 1: IPv4 2: IPv6，不填默认为0</p>
                     * @return IPType <p>IP类型。0: 全部 1: IPv4 2: IPv6，不填默认为0</p>
                     * 
                     */
                    int64_t GetIPType() const;

                    /**
                     * 设置<p>IP类型。0: 全部 1: IPv4 2: IPv6，不填默认为0</p>
                     * @param _iPType <p>IP类型。0: 全部 1: IPv4 2: IPv6，不填默认为0</p>
                     * 
                     */
                    void SetIPType(const int64_t& _iPType);

                    /**
                     * 判断参数 IPType 是否已赋值
                     * @return IPType 是否已赋值
                     * 
                     */
                    bool IPTypeHasBeenSet() const;

                    /**
                     * 获取<p>拨测点描述关键词。</p>
                     * @return Name <p>拨测点描述关键词。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>拨测点描述关键词。</p>
                     * @param _name <p>拨测点描述关键词。</p>
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
                     * 获取<p>地域ID。0: 精选拨测点 1: 国内 2: 港澳台 3: 亚太 4: 欧洲与美洲 5: 非洲与大洋洲，不填默认为0</p>
                     * @return RegionID <p>地域ID。0: 精选拨测点 1: 国内 2: 港澳台 3: 亚太 4: 欧洲与美洲 5: 非洲与大洋洲，不填默认为0</p>
                     * 
                     */
                    int64_t GetRegionID() const;

                    /**
                     * 设置<p>地域ID。0: 精选拨测点 1: 国内 2: 港澳台 3: 亚太 4: 欧洲与美洲 5: 非洲与大洋洲，不填默认为0</p>
                     * @param _regionID <p>地域ID。0: 精选拨测点 1: 国内 2: 港澳台 3: 亚太 4: 欧洲与美洲 5: 非洲与大洋洲，不填默认为0</p>
                     * 
                     */
                    void SetRegionID(const int64_t& _regionID);

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     * 
                     */
                    bool RegionIDHasBeenSet() const;

                    /**
                     * 获取<p>省份或国家ID。0表示全部，不填默认为0</p>
                     * @return DistrictID <p>省份或国家ID。0表示全部，不填默认为0</p>
                     * 
                     */
                    int64_t GetDistrictID() const;

                    /**
                     * 设置<p>省份或国家ID。0表示全部，不填默认为0</p>
                     * @param _districtID <p>省份或国家ID。0表示全部，不填默认为0</p>
                     * 
                     */
                    void SetDistrictID(const int64_t& _districtID);

                    /**
                     * 判断参数 DistrictID 是否已赋值
                     * @return DistrictID 是否已赋值
                     * 
                     */
                    bool DistrictIDHasBeenSet() const;

                    /**
                     * 获取<p>运营商ID。0: 全部 1: 中国电信 2: 中国联通 3: 中国移动 99: 其他，不填默认为0</p>
                     * @return NetServiceID <p>运营商ID。0: 全部 1: 中国电信 2: 中国联通 3: 中国移动 99: 其他，不填默认为0</p>
                     * 
                     */
                    int64_t GetNetServiceID() const;

                    /**
                     * 设置<p>运营商ID。0: 全部 1: 中国电信 2: 中国联通 3: 中国移动 99: 其他，不填默认为0</p>
                     * @param _netServiceID <p>运营商ID。0: 全部 1: 中国电信 2: 中国联通 3: 中国移动 99: 其他，不填默认为0</p>
                     * 
                     */
                    void SetNetServiceID(const int64_t& _netServiceID);

                    /**
                     * 判断参数 NetServiceID 是否已赋值
                     * @return NetServiceID 是否已赋值
                     * 
                     */
                    bool NetServiceIDHasBeenSet() const;

                    /**
                     * 获取<p>节点组类型。0: 高级拨测点组 1: 可用性节点 2: 我的拨测点组，不填默认为0</p>
                     * @return NodeGroupType <p>节点组类型。0: 高级拨测点组 1: 可用性节点 2: 我的拨测点组，不填默认为0</p>
                     * 
                     */
                    int64_t GetNodeGroupType() const;

                    /**
                     * 设置<p>节点组类型。0: 高级拨测点组 1: 可用性节点 2: 我的拨测点组，不填默认为0</p>
                     * @param _nodeGroupType <p>节点组类型。0: 高级拨测点组 1: 可用性节点 2: 我的拨测点组，不填默认为0</p>
                     * 
                     */
                    void SetNodeGroupType(const int64_t& _nodeGroupType);

                    /**
                     * 判断参数 NodeGroupType 是否已赋值
                     * @return NodeGroupType 是否已赋值
                     * 
                     */
                    bool NodeGroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务类型，如1、2、3、4、5、6、7；1-页面性能、2-文件上传、3-文件下载、4-端口性能、5-网络质量、6-音视频体验、7-域名whois，不填默认为0，不对任务类型做过滤</p>
                     * @return TaskType <p>任务类型，如1、2、3、4、5、6、7；1-页面性能、2-文件上传、3-文件下载、4-端口性能、5-网络质量、6-音视频体验、7-域名whois，不填默认为0，不对任务类型做过滤</p>
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置<p>任务类型，如1、2、3、4、5、6、7；1-页面性能、2-文件上传、3-文件下载、4-端口性能、5-网络质量、6-音视频体验、7-域名whois，不填默认为0，不对任务类型做过滤</p>
                     * @param _taskType <p>任务类型，如1、2、3、4、5、6、7；1-页面性能、2-文件上传、3-文件下载、4-端口性能、5-网络质量、6-音视频体验、7-域名whois，不填默认为0，不对任务类型做过滤</p>
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>测试类型，包含定时测试与即时测试。0-定时拨测，其它表示即时拨测。</p>
                     * @return ProbeType <p>测试类型，包含定时测试与即时测试。0-定时拨测，其它表示即时拨测。</p>
                     * 
                     */
                    uint64_t GetProbeType() const;

                    /**
                     * 设置<p>测试类型，包含定时测试与即时测试。0-定时拨测，其它表示即时拨测。</p>
                     * @param _probeType <p>测试类型，包含定时测试与即时测试。0-定时拨测，其它表示即时拨测。</p>
                     * 
                     */
                    void SetProbeType(const uint64_t& _probeType);

                    /**
                     * 判断参数 ProbeType 是否已赋值
                     * @return ProbeType 是否已赋值
                     * 
                     */
                    bool ProbeTypeHasBeenSet() const;

                private:

                    /**
                     * <p>节点类型。0: 全部 1: IDC 2: LastMile 3: Mobile，不填默认为0</p>
                     */
                    std::vector<int64_t> m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>节点分类。0: 全部 1: PC 2：Mobile，不填默认为0。PC分类包括IDC和LM节点类型，Mobile分类包括Mobile节点类型。与NodeType参数取交集。</p>
                     */
                    int64_t m_taskCategory;
                    bool m_taskCategoryHasBeenSet;

                    /**
                     * <p>IP类型。0: 全部 1: IPv4 2: IPv6，不填默认为0</p>
                     */
                    int64_t m_iPType;
                    bool m_iPTypeHasBeenSet;

                    /**
                     * <p>拨测点描述关键词。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>地域ID。0: 精选拨测点 1: 国内 2: 港澳台 3: 亚太 4: 欧洲与美洲 5: 非洲与大洋洲，不填默认为0</p>
                     */
                    int64_t m_regionID;
                    bool m_regionIDHasBeenSet;

                    /**
                     * <p>省份或国家ID。0表示全部，不填默认为0</p>
                     */
                    int64_t m_districtID;
                    bool m_districtIDHasBeenSet;

                    /**
                     * <p>运营商ID。0: 全部 1: 中国电信 2: 中国联通 3: 中国移动 99: 其他，不填默认为0</p>
                     */
                    int64_t m_netServiceID;
                    bool m_netServiceIDHasBeenSet;

                    /**
                     * <p>节点组类型。0: 高级拨测点组 1: 可用性节点 2: 我的拨测点组，不填默认为0</p>
                     */
                    int64_t m_nodeGroupType;
                    bool m_nodeGroupTypeHasBeenSet;

                    /**
                     * <p>任务类型，如1、2、3、4、5、6、7；1-页面性能、2-文件上传、3-文件下载、4-端口性能、5-网络质量、6-音视频体验、7-域名whois，不填默认为0，不对任务类型做过滤</p>
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>测试类型，包含定时测试与即时测试。0-定时拨测，其它表示即时拨测。</p>
                     */
                    uint64_t m_probeType;
                    bool m_probeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBENODEGROUPSREQUEST_H_
