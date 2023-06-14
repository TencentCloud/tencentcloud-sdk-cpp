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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEJVMMONITORREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEJVMMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeJvmMonitor请求参数结构体
                */
                class DescribeJvmMonitorRequest : public AbstractModel
                {
                public:
                    DescribeJvmMonitorRequest();
                    ~DescribeJvmMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的实例Id
                     * @return InstanceId 查询的实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置查询的实例Id
                     * @param _instanceId 查询的实例Id
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
                     * 获取实例所属应用Id
                     * @return ApplicationId 实例所属应用Id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置实例所属应用Id
                     * @param _applicationId 实例所属应用Id
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取时间粒度,单位:秒
                     * @return TimeGranularity 时间粒度,单位:秒
                     * 
                     */
                    int64_t GetTimeGranularity() const;

                    /**
                     * 设置时间粒度,单位:秒
                     * @param _timeGranularity 时间粒度,单位:秒
                     * 
                     */
                    void SetTimeGranularity(const int64_t& _timeGranularity);

                    /**
                     * 判断参数 TimeGranularity 是否已赋值
                     * @return TimeGranularity 是否已赋值
                     * 
                     */
                    bool TimeGranularityHasBeenSet() const;

                    /**
                     * 获取查询数据起始时间格式(yyyy-MM-dd HH:mm:ss)
                     * @return From 查询数据起始时间格式(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置查询数据起始时间格式(yyyy-MM-dd HH:mm:ss)
                     * @param _from 查询数据起始时间格式(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取查询数据结束时间格式(yyyy-MM-dd HH:mm:ss)
                     * @return To 查询数据结束时间格式(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    std::string GetTo() const;

                    /**
                     * 设置查询数据结束时间格式(yyyy-MM-dd HH:mm:ss)
                     * @param _to 查询数据结束时间格式(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    void SetTo(const std::string& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取查询的监控图列表,以返回值属性名作为入参
                     * @return RequiredPictures 查询的监控图列表,以返回值属性名作为入参
                     * 
                     */
                    std::vector<std::string> GetRequiredPictures() const;

                    /**
                     * 设置查询的监控图列表,以返回值属性名作为入参
                     * @param _requiredPictures 查询的监控图列表,以返回值属性名作为入参
                     * 
                     */
                    void SetRequiredPictures(const std::vector<std::string>& _requiredPictures);

                    /**
                     * 判断参数 RequiredPictures 是否已赋值
                     * @return RequiredPictures 是否已赋值
                     * 
                     */
                    bool RequiredPicturesHasBeenSet() const;

                    /**
                     * 获取扩展字段
                     * @return Tag 扩展字段
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置扩展字段
                     * @param _tag 扩展字段
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 查询的实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例所属应用Id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 时间粒度,单位:秒
                     */
                    int64_t m_timeGranularity;
                    bool m_timeGranularityHasBeenSet;

                    /**
                     * 查询数据起始时间格式(yyyy-MM-dd HH:mm:ss)
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 查询数据结束时间格式(yyyy-MM-dd HH:mm:ss)
                     */
                    std::string m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 查询的监控图列表,以返回值属性名作为入参
                     */
                    std::vector<std::string> m_requiredPictures;
                    bool m_requiredPicturesHasBeenSet;

                    /**
                     * 扩展字段
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEJVMMONITORREQUEST_H_
