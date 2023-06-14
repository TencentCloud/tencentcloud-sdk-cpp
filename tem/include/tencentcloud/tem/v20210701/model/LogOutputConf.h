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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_LOGOUTPUTCONF_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_LOGOUTPUTCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 日志输出配置
                */
                class LogOutputConf : public AbstractModel
                {
                public:
                    LogOutputConf();
                    ~LogOutputConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志消费端类型
                     * @return OutputType 日志消费端类型
                     * 
                     */
                    std::string GetOutputType() const;

                    /**
                     * 设置日志消费端类型
                     * @param _outputType 日志消费端类型
                     * 
                     */
                    void SetOutputType(const std::string& _outputType);

                    /**
                     * 判断参数 OutputType 是否已赋值
                     * @return OutputType 是否已赋值
                     * 
                     */
                    bool OutputTypeHasBeenSet() const;

                    /**
                     * 获取cls日志集
                     * @return ClsLogsetName cls日志集
                     * 
                     */
                    std::string GetClsLogsetName() const;

                    /**
                     * 设置cls日志集
                     * @param _clsLogsetName cls日志集
                     * 
                     */
                    void SetClsLogsetName(const std::string& _clsLogsetName);

                    /**
                     * 判断参数 ClsLogsetName 是否已赋值
                     * @return ClsLogsetName 是否已赋值
                     * 
                     */
                    bool ClsLogsetNameHasBeenSet() const;

                    /**
                     * 获取cls日志主题
                     * @return ClsLogTopicId cls日志主题
                     * 
                     */
                    std::string GetClsLogTopicId() const;

                    /**
                     * 设置cls日志主题
                     * @param _clsLogTopicId cls日志主题
                     * 
                     */
                    void SetClsLogTopicId(const std::string& _clsLogTopicId);

                    /**
                     * 判断参数 ClsLogTopicId 是否已赋值
                     * @return ClsLogTopicId 是否已赋值
                     * 
                     */
                    bool ClsLogTopicIdHasBeenSet() const;

                    /**
                     * 获取cls日志集id
                     * @return ClsLogsetId cls日志集id
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置cls日志集id
                     * @param _clsLogsetId cls日志集id
                     * 
                     */
                    void SetClsLogsetId(const std::string& _clsLogsetId);

                    /**
                     * 判断参数 ClsLogsetId 是否已赋值
                     * @return ClsLogsetId 是否已赋值
                     * 
                     */
                    bool ClsLogsetIdHasBeenSet() const;

                    /**
                     * 获取cls日志名称
                     * @return ClsLogTopicName cls日志名称
                     * 
                     */
                    std::string GetClsLogTopicName() const;

                    /**
                     * 设置cls日志名称
                     * @param _clsLogTopicName cls日志名称
                     * 
                     */
                    void SetClsLogTopicName(const std::string& _clsLogTopicName);

                    /**
                     * 判断参数 ClsLogTopicName 是否已赋值
                     * @return ClsLogTopicName 是否已赋值
                     * 
                     */
                    bool ClsLogTopicNameHasBeenSet() const;

                private:

                    /**
                     * 日志消费端类型
                     */
                    std::string m_outputType;
                    bool m_outputTypeHasBeenSet;

                    /**
                     * cls日志集
                     */
                    std::string m_clsLogsetName;
                    bool m_clsLogsetNameHasBeenSet;

                    /**
                     * cls日志主题
                     */
                    std::string m_clsLogTopicId;
                    bool m_clsLogTopicIdHasBeenSet;

                    /**
                     * cls日志集id
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * cls日志名称
                     */
                    std::string m_clsLogTopicName;
                    bool m_clsLogTopicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_LOGOUTPUTCONF_H_
