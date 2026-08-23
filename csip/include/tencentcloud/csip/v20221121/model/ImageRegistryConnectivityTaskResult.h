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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYCONNECTIVITYTASKRESULT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYCONNECTIVITYTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像仓库联通性任务结果
                */
                class ImageRegistryConnectivityTaskResult : public AbstractModel
                {
                public:
                    ImageRegistryConnectivityTaskResult();
                    ~ImageRegistryConnectivityTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检查结果</p>
                     * @return ConnDetectMessage <p>检查结果</p>
                     * 
                     */
                    std::string GetConnDetectMessage() const;

                    /**
                     * 设置<p>检查结果</p>
                     * @param _connDetectMessage <p>检查结果</p>
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
                     * 获取<p>检查状态</p>
                     * @return ConnDetectStatus <p>检查状态</p>
                     * 
                     */
                    std::string GetConnDetectStatus() const;

                    /**
                     * 设置<p>检查状态</p>
                     * @param _connDetectStatus <p>检查状态</p>
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
                     * 获取<p>失败原因</p>
                     * @return FailReason <p>失败原因</p>
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>失败原因</p>
                     * @param _failReason <p>失败原因</p>
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取<p>主机Quuid</p>
                     * @return Quuid <p>主机Quuid</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>主机Quuid</p>
                     * @param _quuid <p>主机Quuid</p>
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
                     * 获取<p>排查解决方案</p>
                     * @return Solution <p>排查解决方案</p>
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置<p>排查解决方案</p>
                     * @param _solution <p>排查解决方案</p>
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
                     * 获取<p>主机Uuid</p>
                     * @return Uuid <p>主机Uuid</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>主机Uuid</p>
                     * @param _uuid <p>主机Uuid</p>
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * <p>检查结果</p>
                     */
                    std::string m_connDetectMessage;
                    bool m_connDetectMessageHasBeenSet;

                    /**
                     * <p>检查状态</p>
                     */
                    std::string m_connDetectStatus;
                    bool m_connDetectStatusHasBeenSet;

                    /**
                     * <p>失败原因</p>
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * <p>主机Quuid</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>排查解决方案</p>
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * <p>主机Uuid</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYCONNECTIVITYTASKRESULT_H_
