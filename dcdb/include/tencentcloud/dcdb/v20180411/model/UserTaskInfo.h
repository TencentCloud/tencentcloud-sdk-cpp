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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_USERTASKINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_USERTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 用户任务信息
                */
                class UserTaskInfo : public AbstractModel
                {
                public:
                    UserTaskInfo();
                    ~UserTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return Id 任务ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置任务ID
                     * @param _id 任务ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户账户ID
                     * @return AppId 用户账户ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户账户ID
                     * @param _appId 用户账户ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取任务状态，0-任务初始化中；1-任务运行中；2-任务成功；3-任务失败
                     * @return Status 任务状态，0-任务初始化中；1-任务运行中；2-任务成功；3-任务失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态，0-任务初始化中；1-任务运行中；2-任务成功；3-任务失败
                     * @param _status 任务状态，0-任务初始化中；1-任务运行中；2-任务成功；3-任务失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务类型，0-实例回档；1-实例创建；2-实例扩容；3-实例迁移；4-实例删除；5-实例重启
                     * @return UserTaskType 任务类型，0-实例回档；1-实例创建；2-实例扩容；3-实例迁移；4-实例删除；5-实例重启
                     * 
                     */
                    int64_t GetUserTaskType() const;

                    /**
                     * 设置任务类型，0-实例回档；1-实例创建；2-实例扩容；3-实例迁移；4-实例删除；5-实例重启
                     * @param _userTaskType 任务类型，0-实例回档；1-实例创建；2-实例扩容；3-实例迁移；4-实例删除；5-实例重启
                     * 
                     */
                    void SetUserTaskType(const int64_t& _userTaskType);

                    /**
                     * 判断参数 UserTaskType 是否已赋值
                     * @return UserTaskType 是否已赋值
                     * 
                     */
                    bool UserTaskTypeHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间
                     * @return EndTime 任务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间
                     * @param _endTime 任务结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务错误信息
                     * @return ErrMsg 任务错误信息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置任务错误信息
                     * @param _errMsg 任务错误信息
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取客户端参数
                     * @return InputData 客户端参数
                     * 
                     */
                    std::string GetInputData() const;

                    /**
                     * 设置客户端参数
                     * @param _inputData 客户端参数
                     * 
                     */
                    void SetInputData(const std::string& _inputData);

                    /**
                     * 判断参数 InputData 是否已赋值
                     * @return InputData 是否已赋值
                     * 
                     */
                    bool InputDataHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户账户ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 任务状态，0-任务初始化中；1-任务运行中；2-任务成功；3-任务失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务类型，0-实例回档；1-实例创建；2-实例扩容；3-实例迁移；4-实例删除；5-实例重启
                     */
                    int64_t m_userTaskType;
                    bool m_userTaskTypeHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务错误信息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 客户端参数
                     */
                    std::string m_inputData;
                    bool m_inputDataHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 地域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_USERTASKINFO_H_
