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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_COSSETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_COSSETTINGS_H_

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
                * COS 相关配置
                */
                class COSSettings : public AbstractModel
                {
                public:
                    COSSettings();
                    ~COSSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取COS SecretId
                     * @return CosSecretId COS SecretId
                     * 
                     */
                    std::string GetCosSecretId() const;

                    /**
                     * 设置COS SecretId
                     * @param _cosSecretId COS SecretId
                     * 
                     */
                    void SetCosSecretId(const std::string& _cosSecretId);

                    /**
                     * 判断参数 CosSecretId 是否已赋值
                     * @return CosSecretId 是否已赋值
                     * 
                     */
                    bool CosSecretIdHasBeenSet() const;

                    /**
                     * 获取COS SecrectKey
                     * @return CosSecretKey COS SecrectKey
                     * 
                     */
                    std::string GetCosSecretKey() const;

                    /**
                     * 设置COS SecrectKey
                     * @param _cosSecretKey COS SecrectKey
                     * 
                     */
                    void SetCosSecretKey(const std::string& _cosSecretKey);

                    /**
                     * 判断参数 CosSecretKey 是否已赋值
                     * @return CosSecretKey 是否已赋值
                     * 
                     */
                    bool CosSecretKeyHasBeenSet() const;

                    /**
                     * 获取日志存储在COS上的路径
                     * @return LogOnCosPath 日志存储在COS上的路径
                     * 
                     */
                    std::string GetLogOnCosPath() const;

                    /**
                     * 设置日志存储在COS上的路径
                     * @param _logOnCosPath 日志存储在COS上的路径
                     * 
                     */
                    void SetLogOnCosPath(const std::string& _logOnCosPath);

                    /**
                     * 判断参数 LogOnCosPath 是否已赋值
                     * @return LogOnCosPath 是否已赋值
                     * 
                     */
                    bool LogOnCosPathHasBeenSet() const;

                private:

                    /**
                     * COS SecretId
                     */
                    std::string m_cosSecretId;
                    bool m_cosSecretIdHasBeenSet;

                    /**
                     * COS SecrectKey
                     */
                    std::string m_cosSecretKey;
                    bool m_cosSecretKeyHasBeenSet;

                    /**
                     * 日志存储在COS上的路径
                     */
                    std::string m_logOnCosPath;
                    bool m_logOnCosPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_COSSETTINGS_H_
