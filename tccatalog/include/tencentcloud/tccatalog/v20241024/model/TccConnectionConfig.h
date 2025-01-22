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

#ifndef TENCENTCLOUD_TCCATALOG_V20241024_MODEL_TCCCONNECTIONCONFIG_H_
#define TENCENTCLOUD_TCCATALOG_V20241024_MODEL_TCCCONNECTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tccatalog/v20241024/model/TccConnection.h>


namespace TencentCloud
{
    namespace Tccatalog
    {
        namespace V20241024
        {
            namespace Model
            {
                /**
                * Tcc数据目录连接信息
                */
                class TccConnectionConfig : public AbstractModel
                {
                public:
                    TccConnectionConfig();
                    ~TccConnectionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tcc数据目录连接配置
                     * @return TccHive Tcc数据目录连接配置
                     * 
                     */
                    TccConnection GetTccHive() const;

                    /**
                     * 设置Tcc数据目录连接配置
                     * @param _tccHive Tcc数据目录连接配置
                     * 
                     */
                    void SetTccHive(const TccConnection& _tccHive);

                    /**
                     * 判断参数 TccHive 是否已赋值
                     * @return TccHive 是否已赋值
                     * 
                     */
                    bool TccHiveHasBeenSet() const;

                private:

                    /**
                     * Tcc数据目录连接配置
                     */
                    TccConnection m_tccHive;
                    bool m_tccHiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCCATALOG_V20241024_MODEL_TCCCONNECTIONCONFIG_H_
