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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETHOSTTOTALCOUNTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETHOSTTOTALCOUNTRESPONSE_H_

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
                * DescribeAssetHostTotalCount返回参数结构体
                */
                class DescribeAssetHostTotalCountResponse : public AbstractModel
                {
                public:
                    DescribeAssetHostTotalCountResponse();
                    ~DescribeAssetHostTotalCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取各项资源数量
system : 资源监控
account: 账号
port: 端口
process: 进程
app: 应用软件
database:数据库
webapp: Web应用
webframe: Web框架
webservice: Web服务
weblocation: Web站点
systempackage: 系统安装包
jar: jar包
initservice:启动服务
env: 环境变量
coremodule: 内核模块
                     * @return Types 各项资源数量
system : 资源监控
account: 账号
port: 端口
process: 进程
app: 应用软件
database:数据库
webapp: Web应用
webframe: Web框架
webservice: Web服务
weblocation: Web站点
systempackage: 系统安装包
jar: jar包
initservice:启动服务
env: 环境变量
coremodule: 内核模块
                     * 
                     */
                    std::vector<AssetKeyVal> GetTypes() const;

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                private:

                    /**
                     * 各项资源数量
system : 资源监控
account: 账号
port: 端口
process: 进程
app: 应用软件
database:数据库
webapp: Web应用
webframe: Web框架
webservice: Web服务
weblocation: Web站点
systempackage: 系统安装包
jar: jar包
initservice:启动服务
env: 环境变量
coremodule: 内核模块
                     */
                    std::vector<AssetKeyVal> m_types;
                    bool m_typesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETHOSTTOTALCOUNTRESPONSE_H_
