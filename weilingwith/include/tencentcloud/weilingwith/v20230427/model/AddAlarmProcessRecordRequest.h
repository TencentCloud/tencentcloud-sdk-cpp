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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ADDALARMPROCESSRECORDREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ADDALARMPROCESSRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/ProcessRecordInfo.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * AddAlarmProcessRecord请求参数结构体
                */
                class AddAlarmProcessRecordRequest : public AbstractModel
                {
                public:
                    AddAlarmProcessRecordRequest();
                    ~AddAlarmProcessRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取处理记录项
                     * @return RecordSet 处理记录项
                     * 
                     */
                    std::vector<ProcessRecordInfo> GetRecordSet() const;

                    /**
                     * 设置处理记录项
                     * @param _recordSet 处理记录项
                     * 
                     */
                    void SetRecordSet(const std::vector<ProcessRecordInfo>& _recordSet);

                    /**
                     * 判断参数 RecordSet 是否已赋值
                     * @return RecordSet 是否已赋值
                     * 
                     */
                    bool RecordSetHasBeenSet() const;

                    /**
                     * 获取工作空间id
                     * @return WorkspaceId 工作空间id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间id
                     * @param _workspaceId 工作空间id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取应用token
                     * @return ApplicationToken 应用token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置应用token
                     * @param _applicationToken 应用token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                    /**
                     * 获取非孪生平台外部应用appid
                     * @return ApplicationId 非孪生平台外部应用appid
                     * 
                     */
                    int64_t GetApplicationId() const;

                    /**
                     * 设置非孪生平台外部应用appid
                     * @param _applicationId 非孪生平台外部应用appid
                     * 
                     */
                    void SetApplicationId(const int64_t& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取此字段填写的是非孪生中台的用户id（多个用逗号分隔），如果是非孪生中台用户必填该字段

                     * @return ExtendOne 此字段填写的是非孪生中台的用户id（多个用逗号分隔），如果是非孪生中台用户必填该字段

                     * 
                     */
                    std::string GetExtendOne() const;

                    /**
                     * 设置此字段填写的是非孪生中台的用户id（多个用逗号分隔），如果是非孪生中台用户必填该字段

                     * @param _extendOne 此字段填写的是非孪生中台的用户id（多个用逗号分隔），如果是非孪生中台用户必填该字段

                     * 
                     */
                    void SetExtendOne(const std::string& _extendOne);

                    /**
                     * 判断参数 ExtendOne 是否已赋值
                     * @return ExtendOne 是否已赋值
                     * 
                     */
                    bool ExtendOneHasBeenSet() const;

                private:

                    /**
                     * 处理记录项
                     */
                    std::vector<ProcessRecordInfo> m_recordSet;
                    bool m_recordSetHasBeenSet;

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 非孪生平台外部应用appid
                     */
                    int64_t m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 此字段填写的是非孪生中台的用户id（多个用逗号分隔），如果是非孪生中台用户必填该字段

                     */
                    std::string m_extendOne;
                    bool m_extendOneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ADDALARMPROCESSRECORDREQUEST_H_
