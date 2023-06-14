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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBENODESREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBENODESREQUEST_H_

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
                * DescribeNodes请求参数结构体
                */
                class DescribeNodesRequest : public AbstractModel
                {
                public:
                    DescribeNodesRequest();
                    ~DescribeNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取节点类型
<li> 1 = IDC </li>
<li> 2 = LastMile </li>
<li> 3 = Mobile </li>
                     * @return NodeType 节点类型
<li> 1 = IDC </li>
<li> 2 = LastMile </li>
<li> 3 = Mobile </li>
                     * 
                     */
                    int64_t GetNodeType() const;

                    /**
                     * 设置节点类型
<li> 1 = IDC </li>
<li> 2 = LastMile </li>
<li> 3 = Mobile </li>
                     * @param _nodeType 节点类型
<li> 1 = IDC </li>
<li> 2 = LastMile </li>
<li> 3 = Mobile </li>
                     * 
                     */
                    void SetNodeType(const int64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点区域
<li> 1 = 中国大陆 </li>
<li> 2 = 港澳台 </li>
<li> 3 = 境外</li>
                     * @return Location 节点区域
<li> 1 = 中国大陆 </li>
<li> 2 = 港澳台 </li>
<li> 3 = 境外</li>
                     * 
                     */
                    int64_t GetLocation() const;

                    /**
                     * 设置节点区域
<li> 1 = 中国大陆 </li>
<li> 2 = 港澳台 </li>
<li> 3 = 境外</li>
                     * @param _location 节点区域
<li> 1 = 中国大陆 </li>
<li> 2 = 港澳台 </li>
<li> 3 = 境外</li>
                     * 
                     */
                    void SetLocation(const int64_t& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取是否IPv6
                     * @return IsIPv6 是否IPv6
                     * 
                     */
                    bool GetIsIPv6() const;

                    /**
                     * 设置是否IPv6
                     * @param _isIPv6 是否IPv6
                     * 
                     */
                    void SetIsIPv6(const bool& _isIPv6);

                    /**
                     * 判断参数 IsIPv6 是否已赋值
                     * @return IsIPv6 是否已赋值
                     * 
                     */
                    bool IsIPv6HasBeenSet() const;

                    /**
                     * 获取名字模糊搜索
                     * @return NodeName 名字模糊搜索
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置名字模糊搜索
                     * @param _nodeName 名字模糊搜索
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     * @return PayMode 付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     * @param _payMode 付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取任务类型
<li>1 = 页面性能</li>
<li>2 = 文件上传</li>
<li>3 = 文件下载</li>
<li>4 = 端口性能</li>
<li>5 = 网络质量</li>
<li>6 = 音视频体验</li>
                     * @return TaskType 任务类型
<li>1 = 页面性能</li>
<li>2 = 文件上传</li>
<li>3 = 文件下载</li>
<li>4 = 端口性能</li>
<li>5 = 网络质量</li>
<li>6 = 音视频体验</li>
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型
<li>1 = 页面性能</li>
<li>2 = 文件上传</li>
<li>3 = 文件下载</li>
<li>4 = 端口性能</li>
<li>5 = 网络质量</li>
<li>6 = 音视频体验</li>
                     * @param _taskType 任务类型
<li>1 = 页面性能</li>
<li>2 = 文件上传</li>
<li>3 = 文件下载</li>
<li>4 = 端口性能</li>
<li>5 = 网络质量</li>
<li>6 = 音视频体验</li>
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 节点类型
<li> 1 = IDC </li>
<li> 2 = LastMile </li>
<li> 3 = Mobile </li>
                     */
                    int64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点区域
<li> 1 = 中国大陆 </li>
<li> 2 = 港澳台 </li>
<li> 3 = 境外</li>
                     */
                    int64_t m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 是否IPv6
                     */
                    bool m_isIPv6;
                    bool m_isIPv6HasBeenSet;

                    /**
                     * 名字模糊搜索
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 任务类型
<li>1 = 页面性能</li>
<li>2 = 文件上传</li>
<li>3 = 文件下载</li>
<li>4 = 端口性能</li>
<li>5 = 网络质量</li>
<li>6 = 音视频体验</li>
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBENODESREQUEST_H_
