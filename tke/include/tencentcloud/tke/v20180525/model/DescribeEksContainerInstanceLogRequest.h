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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCELOGREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCELOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEksContainerInstanceLog请求参数结构体
                */
                class DescribeEksContainerInstanceLogRequest : public AbstractModel
                {
                public:
                    DescribeEksContainerInstanceLogRequest();
                    ~DescribeEksContainerInstanceLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Eks Container Instance Id，即容器实例Id
                     * @return EksCiId Eks Container Instance Id，即容器实例Id
                     * 
                     */
                    std::string GetEksCiId() const;

                    /**
                     * 设置Eks Container Instance Id，即容器实例Id
                     * @param _eksCiId Eks Container Instance Id，即容器实例Id
                     * 
                     */
                    void SetEksCiId(const std::string& _eksCiId);

                    /**
                     * 判断参数 EksCiId 是否已赋值
                     * @return EksCiId 是否已赋值
                     * 
                     */
                    bool EksCiIdHasBeenSet() const;

                    /**
                     * 获取容器名称，单容器的实例可选填。如果为多容器实例，请指定容器名称。
                     * @return ContainerName 容器名称，单容器的实例可选填。如果为多容器实例，请指定容器名称。
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名称，单容器的实例可选填。如果为多容器实例，请指定容器名称。
                     * @param _containerName 容器名称，单容器的实例可选填。如果为多容器实例，请指定容器名称。
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取返回最新日志行数，默认500，最大2000。日志内容最大返回 1M 数据。
                     * @return Tail 返回最新日志行数，默认500，最大2000。日志内容最大返回 1M 数据。
                     * 
                     */
                    uint64_t GetTail() const;

                    /**
                     * 设置返回最新日志行数，默认500，最大2000。日志内容最大返回 1M 数据。
                     * @param _tail 返回最新日志行数，默认500，最大2000。日志内容最大返回 1M 数据。
                     * 
                     */
                    void SetTail(const uint64_t& _tail);

                    /**
                     * 判断参数 Tail 是否已赋值
                     * @return Tail 是否已赋值
                     * 
                     */
                    bool TailHasBeenSet() const;

                    /**
                     * 获取UTC时间，RFC3339标准
                     * @return StartTime UTC时间，RFC3339标准
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置UTC时间，RFC3339标准
                     * @param _startTime UTC时间，RFC3339标准
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取是否是查上一个容器（如果容器退出重启了）
                     * @return Previous 是否是查上一个容器（如果容器退出重启了）
                     * 
                     */
                    bool GetPrevious() const;

                    /**
                     * 设置是否是查上一个容器（如果容器退出重启了）
                     * @param _previous 是否是查上一个容器（如果容器退出重启了）
                     * 
                     */
                    void SetPrevious(const bool& _previous);

                    /**
                     * 判断参数 Previous 是否已赋值
                     * @return Previous 是否已赋值
                     * 
                     */
                    bool PreviousHasBeenSet() const;

                    /**
                     * 获取查询最近多少秒内的日志
                     * @return SinceSeconds 查询最近多少秒内的日志
                     * 
                     */
                    uint64_t GetSinceSeconds() const;

                    /**
                     * 设置查询最近多少秒内的日志
                     * @param _sinceSeconds 查询最近多少秒内的日志
                     * 
                     */
                    void SetSinceSeconds(const uint64_t& _sinceSeconds);

                    /**
                     * 判断参数 SinceSeconds 是否已赋值
                     * @return SinceSeconds 是否已赋值
                     * 
                     */
                    bool SinceSecondsHasBeenSet() const;

                    /**
                     * 获取日志总大小限制
                     * @return LimitBytes 日志总大小限制
                     * 
                     */
                    uint64_t GetLimitBytes() const;

                    /**
                     * 设置日志总大小限制
                     * @param _limitBytes 日志总大小限制
                     * 
                     */
                    void SetLimitBytes(const uint64_t& _limitBytes);

                    /**
                     * 判断参数 LimitBytes 是否已赋值
                     * @return LimitBytes 是否已赋值
                     * 
                     */
                    bool LimitBytesHasBeenSet() const;

                private:

                    /**
                     * Eks Container Instance Id，即容器实例Id
                     */
                    std::string m_eksCiId;
                    bool m_eksCiIdHasBeenSet;

                    /**
                     * 容器名称，单容器的实例可选填。如果为多容器实例，请指定容器名称。
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 返回最新日志行数，默认500，最大2000。日志内容最大返回 1M 数据。
                     */
                    uint64_t m_tail;
                    bool m_tailHasBeenSet;

                    /**
                     * UTC时间，RFC3339标准
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 是否是查上一个容器（如果容器退出重启了）
                     */
                    bool m_previous;
                    bool m_previousHasBeenSet;

                    /**
                     * 查询最近多少秒内的日志
                     */
                    uint64_t m_sinceSeconds;
                    bool m_sinceSecondsHasBeenSet;

                    /**
                     * 日志总大小限制
                     */
                    uint64_t m_limitBytes;
                    bool m_limitBytesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCELOGREQUEST_H_
