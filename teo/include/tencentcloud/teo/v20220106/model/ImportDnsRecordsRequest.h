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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_IMPORTDNSRECORDSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_IMPORTDNSRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ImportDnsRecords请求参数结构体
                */
                class ImportDnsRecordsRequest : public AbstractModel
                {
                public:
                    ImportDnsRecordsRequest();
                    ~ImportDnsRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID
                     * @return ZoneId 站点 ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID
                     * @param ZoneId 站点 ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取文件内容
                     * @return File 文件内容
                     */
                    std::string GetFile() const;

                    /**
                     * 设置文件内容
                     * @param File 文件内容
                     */
                    void SetFile(const std::string& _file);

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     */
                    bool FileHasBeenSet() const;

                private:

                    /**
                     * 站点 ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 文件内容
                     */
                    std::string m_file;
                    bool m_fileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_IMPORTDNSRECORDSREQUEST_H_
