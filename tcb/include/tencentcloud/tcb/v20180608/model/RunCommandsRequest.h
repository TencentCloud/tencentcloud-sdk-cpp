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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_RUNCOMMANDSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_RUNCOMMANDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/MgoCommandParam.h>
#include <tencentcloud/tcb/v20180608/model/MongoConnector.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * RunCommands请求参数结构体
                */
                class RunCommandsRequest : public AbstractModel
                {
                public:
                    RunCommandsRequest();
                    ~RunCommandsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待执行命令
                     * @return MgoCommands 待执行命令
                     * 
                     */
                    std::vector<MgoCommandParam> GetMgoCommands() const;

                    /**
                     * 设置待执行命令
                     * @param _mgoCommands 待执行命令
                     * 
                     */
                    void SetMgoCommands(const std::vector<MgoCommandParam>& _mgoCommands);

                    /**
                     * 判断参数 MgoCommands 是否已赋值
                     * @return MgoCommands 是否已赋值
                     * 
                     */
                    bool MgoCommandsHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return Tag 实例ID
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置实例ID
                     * @param _tag 实例ID
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取Mongo连接器实例信息
                     * @return MongoConnector Mongo连接器实例信息
                     * 
                     */
                    MongoConnector GetMongoConnector() const;

                    /**
                     * 设置Mongo连接器实例信息
                     * @param _mongoConnector Mongo连接器实例信息
                     * 
                     */
                    void SetMongoConnector(const MongoConnector& _mongoConnector);

                    /**
                     * 判断参数 MongoConnector 是否已赋值
                     * @return MongoConnector 是否已赋值
                     * 
                     */
                    bool MongoConnectorHasBeenSet() const;

                private:

                    /**
                     * 待执行命令
                     */
                    std::vector<MgoCommandParam> m_mgoCommands;
                    bool m_mgoCommandsHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Mongo连接器实例信息
                     */
                    MongoConnector m_mongoConnector;
                    bool m_mongoConnectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_RUNCOMMANDSREQUEST_H_
