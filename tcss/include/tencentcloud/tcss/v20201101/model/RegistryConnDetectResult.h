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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_REGISTRYCONNDETECTRESULT_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_REGISTRYCONNDETECTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 镜像仓库联通性检测结果
                */
                class RegistryConnDetectResult : public AbstractModel
                {
                public:
                    RegistryConnDetectResult();
                    ~RegistryConnDetectResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取联通性检测的主机quuid 或者 backend
                     * @return Quuid 联通性检测的主机quuid 或者 backend
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置联通性检测的主机quuid 或者 backend
                     * @param _quuid 联通性检测的主机quuid 或者 backend
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取联通性检测的主机uuid 或者 backend
                     * @return Uuid 联通性检测的主机uuid 或者 backend
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置联通性检测的主机uuid 或者 backend
                     * @param _uuid 联通性检测的主机uuid 或者 backend
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取检测结果状态
                     * @return ConnDetectStatus 检测结果状态
                     * 
                     */
                    std::string GetConnDetectStatus() const;

                    /**
                     * 设置检测结果状态
                     * @param _connDetectStatus 检测结果状态
                     * 
                     */
                    void SetConnDetectStatus(const std::string& _connDetectStatus);

                    /**
                     * 判断参数 ConnDetectStatus 是否已赋值
                     * @return ConnDetectStatus 是否已赋值
                     * 
                     */
                    bool ConnDetectStatusHasBeenSet() const;

                    /**
                     * 获取检测结果信息
                     * @return ConnDetectMessage 检测结果信息
                     * 
                     */
                    std::string GetConnDetectMessage() const;

                    /**
                     * 设置检测结果信息
                     * @param _connDetectMessage 检测结果信息
                     * 
                     */
                    void SetConnDetectMessage(const std::string& _connDetectMessage);

                    /**
                     * 判断参数 ConnDetectMessage 是否已赋值
                     * @return ConnDetectMessage 是否已赋值
                     * 
                     */
                    bool ConnDetectMessageHasBeenSet() const;

                    /**
                     * 获取失败的解决方案
                     * @return Solution 失败的解决方案
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置失败的解决方案
                     * @param _solution 失败的解决方案
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return FailReason 失败原因
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置失败原因
                     * @param _failReason 失败原因
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                private:

                    /**
                     * 联通性检测的主机quuid 或者 backend
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 联通性检测的主机uuid 或者 backend
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 检测结果状态
                     */
                    std::string m_connDetectStatus;
                    bool m_connDetectStatusHasBeenSet;

                    /**
                     * 检测结果信息
                     */
                    std::string m_connDetectMessage;
                    bool m_connDetectMessageHasBeenSet;

                    /**
                     * 失败的解决方案
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_REGISTRYCONNDETECTRESULT_H_
