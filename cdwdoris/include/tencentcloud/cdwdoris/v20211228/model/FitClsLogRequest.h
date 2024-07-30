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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_FITCLSLOGREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_FITCLSLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * FitClsLog请求参数结构体
                */
                class FitClsLogRequest : public AbstractModel
                {
                public:
                    FitClsLogRequest();
                    ~FitClsLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，例如cdwch-xxxx
                     * @return InstanceId 集群ID，例如cdwch-xxxx
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID，例如cdwch-xxxx
                     * @param _instanceId 集群ID，例如cdwch-xxxx
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
                     * 获取cls日志集ID
                     * @return ClsLogSetId cls日志集ID
                     * 
                     */
                    std::string GetClsLogSetId() const;

                    /**
                     * 设置cls日志集ID
                     * @param _clsLogSetId cls日志集ID
                     * 
                     */
                    void SetClsLogSetId(const std::string& _clsLogSetId);

                    /**
                     * 判断参数 ClsLogSetId 是否已赋值
                     * @return ClsLogSetId 是否已赋值
                     * 
                     */
                    bool ClsLogSetIdHasBeenSet() const;

                    /**
                     * 获取日志的类型，es还是cls_topic
                     * @return LogType 日志的类型，es还是cls_topic
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志的类型，es还是cls_topic
                     * @param _logType 日志的类型，es还是cls_topic
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                private:

                    /**
                     * 集群ID，例如cdwch-xxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * cls日志集ID
                     */
                    std::string m_clsLogSetId;
                    bool m_clsLogSetIdHasBeenSet;

                    /**
                     * 日志的类型，es还是cls_topic
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_FITCLSLOGREQUEST_H_
