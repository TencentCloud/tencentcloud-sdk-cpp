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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CNAMESTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CNAMESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 接入域名 CNAME 配置状态
                */
                class CnameStatus : public AbstractModel
                {
                public:
                    CnameStatus();
                    ~CnameStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接入域名。
                     * @return RecordName 接入域名。
                     * 
                     */
                    std::string GetRecordName() const;

                    /**
                     * 设置接入域名。
                     * @param _recordName 接入域名。
                     * 
                     */
                    void SetRecordName(const std::string& _recordName);

                    /**
                     * 判断参数 RecordName 是否已赋值
                     * @return RecordName 是否已赋值
                     * 
                     */
                    bool RecordNameHasBeenSet() const;

                    /**
                     * 获取EdgeOne 分配给接入域名的 CNAME。
                     * @return Cname EdgeOne 分配给接入域名的 CNAME。
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置EdgeOne 分配给接入域名的 CNAME。
                     * @param _cname EdgeOne 分配给接入域名的 CNAME。
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取CNAME 配置状态校验结果，取值有：
<li>active：表示接入域名已正确配置到 EdgeOne 为其分配的指定 CNAME；</li>
<li>moved：表示接入域名未配置到 EdgeOne 为其分配的指定 CNAME；</li>
<li>invalid：表示接入域名配置的 CNAME 为 EdgeOne 为其他域名分配的 CNAME，会导致服务异常，请修改为 EdgeOne 为该接入域名提供的指定 CNAME，您可通过本结构体的 Cname 字段获取 EdgeOne 为该接入域名提供的 CNAME。</li>
                     * @return Status CNAME 配置状态校验结果，取值有：
<li>active：表示接入域名已正确配置到 EdgeOne 为其分配的指定 CNAME；</li>
<li>moved：表示接入域名未配置到 EdgeOne 为其分配的指定 CNAME；</li>
<li>invalid：表示接入域名配置的 CNAME 为 EdgeOne 为其他域名分配的 CNAME，会导致服务异常，请修改为 EdgeOne 为该接入域名提供的指定 CNAME，您可通过本结构体的 Cname 字段获取 EdgeOne 为该接入域名提供的 CNAME。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置CNAME 配置状态校验结果，取值有：
<li>active：表示接入域名已正确配置到 EdgeOne 为其分配的指定 CNAME；</li>
<li>moved：表示接入域名未配置到 EdgeOne 为其分配的指定 CNAME；</li>
<li>invalid：表示接入域名配置的 CNAME 为 EdgeOne 为其他域名分配的 CNAME，会导致服务异常，请修改为 EdgeOne 为该接入域名提供的指定 CNAME，您可通过本结构体的 Cname 字段获取 EdgeOne 为该接入域名提供的 CNAME。</li>
                     * @param _status CNAME 配置状态校验结果，取值有：
<li>active：表示接入域名已正确配置到 EdgeOne 为其分配的指定 CNAME；</li>
<li>moved：表示接入域名未配置到 EdgeOne 为其分配的指定 CNAME；</li>
<li>invalid：表示接入域名配置的 CNAME 为 EdgeOne 为其他域名分配的 CNAME，会导致服务异常，请修改为 EdgeOne 为该接入域名提供的指定 CNAME，您可通过本结构体的 Cname 字段获取 EdgeOne 为该接入域名提供的 CNAME。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 接入域名。
                     */
                    std::string m_recordName;
                    bool m_recordNameHasBeenSet;

                    /**
                     * EdgeOne 分配给接入域名的 CNAME。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * CNAME 配置状态校验结果，取值有：
<li>active：表示接入域名已正确配置到 EdgeOne 为其分配的指定 CNAME；</li>
<li>moved：表示接入域名未配置到 EdgeOne 为其分配的指定 CNAME；</li>
<li>invalid：表示接入域名配置的 CNAME 为 EdgeOne 为其他域名分配的 CNAME，会导致服务异常，请修改为 EdgeOne 为该接入域名提供的指定 CNAME，您可通过本结构体的 Cname 字段获取 EdgeOne 为该接入域名提供的 CNAME。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CNAMESTATUS_H_
