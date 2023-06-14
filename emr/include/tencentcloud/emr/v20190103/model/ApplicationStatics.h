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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_APPLICATIONSTATICS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_APPLICATIONSTATICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * yarn application 统计信息
                */
                class ApplicationStatics : public AbstractModel
                {
                public:
                    ApplicationStatics();
                    ~ApplicationStatics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取队列名
                     * @return Queue 队列名
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置队列名
                     * @param _queue 队列名
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return User 用户名
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名
                     * @param _user 用户名
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取作业类型
                     * @return ApplicationType 作业类型
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置作业类型
                     * @param _applicationType 作业类型
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取SumMemorySeconds含义
                     * @return SumMemorySeconds SumMemorySeconds含义
                     * 
                     */
                    int64_t GetSumMemorySeconds() const;

                    /**
                     * 设置SumMemorySeconds含义
                     * @param _sumMemorySeconds SumMemorySeconds含义
                     * 
                     */
                    void SetSumMemorySeconds(const int64_t& _sumMemorySeconds);

                    /**
                     * 判断参数 SumMemorySeconds 是否已赋值
                     * @return SumMemorySeconds 是否已赋值
                     * 
                     */
                    bool SumMemorySecondsHasBeenSet() const;

                    /**
                     * 获取SumVCoreSeconds含义
                     * @return SumVCoreSeconds SumVCoreSeconds含义
                     * 
                     */
                    int64_t GetSumVCoreSeconds() const;

                    /**
                     * 设置SumVCoreSeconds含义
                     * @param _sumVCoreSeconds SumVCoreSeconds含义
                     * 
                     */
                    void SetSumVCoreSeconds(const int64_t& _sumVCoreSeconds);

                    /**
                     * 判断参数 SumVCoreSeconds 是否已赋值
                     * @return SumVCoreSeconds 是否已赋值
                     * 
                     */
                    bool SumVCoreSecondsHasBeenSet() const;

                    /**
                     * 获取SumHDFSBytesWritten（带单位）
                     * @return SumHDFSBytesWritten SumHDFSBytesWritten（带单位）
                     * 
                     */
                    std::string GetSumHDFSBytesWritten() const;

                    /**
                     * 设置SumHDFSBytesWritten（带单位）
                     * @param _sumHDFSBytesWritten SumHDFSBytesWritten（带单位）
                     * 
                     */
                    void SetSumHDFSBytesWritten(const std::string& _sumHDFSBytesWritten);

                    /**
                     * 判断参数 SumHDFSBytesWritten 是否已赋值
                     * @return SumHDFSBytesWritten 是否已赋值
                     * 
                     */
                    bool SumHDFSBytesWrittenHasBeenSet() const;

                    /**
                     * 获取SumHDFSBytesRead（待单位）
                     * @return SumHDFSBytesRead SumHDFSBytesRead（待单位）
                     * 
                     */
                    std::string GetSumHDFSBytesRead() const;

                    /**
                     * 设置SumHDFSBytesRead（待单位）
                     * @param _sumHDFSBytesRead SumHDFSBytesRead（待单位）
                     * 
                     */
                    void SetSumHDFSBytesRead(const std::string& _sumHDFSBytesRead);

                    /**
                     * 判断参数 SumHDFSBytesRead 是否已赋值
                     * @return SumHDFSBytesRead 是否已赋值
                     * 
                     */
                    bool SumHDFSBytesReadHasBeenSet() const;

                    /**
                     * 获取作业数
                     * @return CountApps 作业数
                     * 
                     */
                    int64_t GetCountApps() const;

                    /**
                     * 设置作业数
                     * @param _countApps 作业数
                     * 
                     */
                    void SetCountApps(const int64_t& _countApps);

                    /**
                     * 判断参数 CountApps 是否已赋值
                     * @return CountApps 是否已赋值
                     * 
                     */
                    bool CountAppsHasBeenSet() const;

                private:

                    /**
                     * 队列名
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 作业类型
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * SumMemorySeconds含义
                     */
                    int64_t m_sumMemorySeconds;
                    bool m_sumMemorySecondsHasBeenSet;

                    /**
                     * SumVCoreSeconds含义
                     */
                    int64_t m_sumVCoreSeconds;
                    bool m_sumVCoreSecondsHasBeenSet;

                    /**
                     * SumHDFSBytesWritten（带单位）
                     */
                    std::string m_sumHDFSBytesWritten;
                    bool m_sumHDFSBytesWrittenHasBeenSet;

                    /**
                     * SumHDFSBytesRead（待单位）
                     */
                    std::string m_sumHDFSBytesRead;
                    bool m_sumHDFSBytesReadHasBeenSet;

                    /**
                     * 作业数
                     */
                    int64_t m_countApps;
                    bool m_countAppsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_APPLICATIONSTATICS_H_
