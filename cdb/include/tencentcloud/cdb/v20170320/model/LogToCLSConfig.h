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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_LOGTOCLSCONFIG_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_LOGTOCLSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DB实例慢日志、错误日志投递CLS配置
                */
                class LogToCLSConfig : public AbstractModel
                {
                public:
                    LogToCLSConfig();
                    ~LogToCLSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取投递状态打开或者关闭
                     * @return Status 投递状态打开或者关闭
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置投递状态打开或者关闭
                     * @param _status 投递状态打开或者关闭
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
                     * 获取CLS日志集ID
                     * @return LogSetId CLS日志集ID
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置CLS日志集ID
                     * @param _logSetId CLS日志集ID
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
                     * 获取日志主题ID
                     * @return LogTopicId 日志主题ID
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param _logTopicId 日志主题ID
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取CLS服务所在地域
                     * @return ClsRegion CLS服务所在地域
                     * 
                     */
                    std::string GetClsRegion() const;

                    /**
                     * 设置CLS服务所在地域
                     * @param _clsRegion CLS服务所在地域
                     * 
                     */
                    void SetClsRegion(const std::string& _clsRegion);

                    /**
                     * 判断参数 ClsRegion 是否已赋值
                     * @return ClsRegion 是否已赋值
                     * 
                     */
                    bool ClsRegionHasBeenSet() const;

                private:

                    /**
                     * 投递状态打开或者关闭
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CLS日志集ID
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * CLS服务所在地域
                     */
                    std::string m_clsRegion;
                    bool m_clsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_LOGTOCLSCONFIG_H_
