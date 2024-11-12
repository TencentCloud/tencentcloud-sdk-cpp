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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETTYPETOPRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETTYPETOPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetKeyVal.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetTypeTop返回参数结构体
                */
                class DescribeAssetTypeTopResponse : public AbstractModel
                {
                public:
                    DescribeAssetTypeTopResponse();
                    ~DescribeAssetTypeTopResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账号Top5
                     * @return User 账号Top5
                     * 
                     */
                    std::vector<AssetKeyVal> GetUser() const;

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取端口Top5
                     * @return Port 端口Top5
                     * 
                     */
                    std::vector<AssetKeyVal> GetPort() const;

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取进程Top5
                     * @return Process 进程Top5
                     * 
                     */
                    std::vector<AssetKeyVal> GetProcess() const;

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取软件Top5
                     * @return Software 软件Top5
                     * 
                     */
                    std::vector<AssetKeyVal> GetSoftware() const;

                    /**
                     * 判断参数 Software 是否已赋值
                     * @return Software 是否已赋值
                     * 
                     */
                    bool SoftwareHasBeenSet() const;

                    /**
                     * 获取数据库Top5
                     * @return Database 数据库Top5
                     * 
                     */
                    std::vector<AssetKeyVal> GetDatabase() const;

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Web应用Top5
                     * @return WebApp Web应用Top5
                     * 
                     */
                    std::vector<AssetKeyVal> GetWebApp() const;

                    /**
                     * 判断参数 WebApp 是否已赋值
                     * @return WebApp 是否已赋值
                     * 
                     */
                    bool WebAppHasBeenSet() const;

                    /**
                     * 获取Web站点Top5
                     * @return WebLocation Web站点Top5
                     * 
                     */
                    std::vector<AssetKeyVal> GetWebLocation() const;

                    /**
                     * 判断参数 WebLocation 是否已赋值
                     * @return WebLocation 是否已赋值
                     * 
                     */
                    bool WebLocationHasBeenSet() const;

                    /**
                     * 获取Web框架Top5
                     * @return WebFrame Web框架Top5
                     * 
                     */
                    std::vector<AssetKeyVal> GetWebFrame() const;

                    /**
                     * 判断参数 WebFrame 是否已赋值
                     * @return WebFrame 是否已赋值
                     * 
                     */
                    bool WebFrameHasBeenSet() const;

                    /**
                     * 获取Web服务Top5
                     * @return WebService Web服务Top5
                     * 
                     */
                    std::vector<AssetKeyVal> GetWebService() const;

                    /**
                     * 判断参数 WebService 是否已赋值
                     * @return WebService 是否已赋值
                     * 
                     */
                    bool WebServiceHasBeenSet() const;

                private:

                    /**
                     * 账号Top5
                     */
                    std::vector<AssetKeyVal> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 端口Top5
                     */
                    std::vector<AssetKeyVal> m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 进程Top5
                     */
                    std::vector<AssetKeyVal> m_process;
                    bool m_processHasBeenSet;

                    /**
                     * 软件Top5
                     */
                    std::vector<AssetKeyVal> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * 数据库Top5
                     */
                    std::vector<AssetKeyVal> m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Web应用Top5
                     */
                    std::vector<AssetKeyVal> m_webApp;
                    bool m_webAppHasBeenSet;

                    /**
                     * Web站点Top5
                     */
                    std::vector<AssetKeyVal> m_webLocation;
                    bool m_webLocationHasBeenSet;

                    /**
                     * Web框架Top5
                     */
                    std::vector<AssetKeyVal> m_webFrame;
                    bool m_webFrameHasBeenSet;

                    /**
                     * Web服务Top5
                     */
                    std::vector<AssetKeyVal> m_webService;
                    bool m_webServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETTYPETOPRESPONSE_H_
