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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_LOGTOCLSCONFIG_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_LOGTOCLSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 日志投递CLS配置
                */
                class LogToCLSConfig : public AbstractModel
                {
                public:
                    LogToCLSConfig();
                    ~LogToCLSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CLS服务所在地域</p>
                     * @return CLSRegion <p>CLS服务所在地域</p>
                     * 
                     */
                    std::string GetCLSRegion() const;

                    /**
                     * 设置<p>CLS服务所在地域</p>
                     * @param _cLSRegion <p>CLS服务所在地域</p>
                     * 
                     */
                    void SetCLSRegion(const std::string& _cLSRegion);

                    /**
                     * 判断参数 CLSRegion 是否已赋值
                     * @return CLSRegion 是否已赋值
                     * 
                     */
                    bool CLSRegionHasBeenSet() const;

                    /**
                     * 获取<p>投递状态打开或者关闭</p>
                     * @return Status <p>投递状态打开或者关闭</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>投递状态打开或者关闭</p>
                     * @param _status <p>投递状态打开或者关闭</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>CLS日志集ID</p>
                     * @return LogSetId <p>CLS日志集ID</p>
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置<p>CLS日志集ID</p>
                     * @param _logSetId <p>CLS日志集ID</p>
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取<p>日志主题ID</p>
                     * @return LogTopicId <p>日志主题ID</p>
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置<p>日志主题ID</p>
                     * @param _logTopicId <p>日志主题ID</p>
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                private:

                    /**
                     * <p>CLS服务所在地域</p>
                     */
                    std::string m_cLSRegion;
                    bool m_cLSRegionHasBeenSet;

                    /**
                     * <p>投递状态打开或者关闭</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>CLS日志集ID</p>
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * <p>日志主题ID</p>
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_LOGTOCLSCONFIG_H_
