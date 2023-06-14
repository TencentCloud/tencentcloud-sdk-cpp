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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_TERMINATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_TERMINATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * TerminateInstances请求参数结构体
                */
                class TerminateInstancesRequest : public AbstractModel
                {
                public:
                    TerminateInstancesRequest();
                    ~TerminateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待销毁的实例ID列表。
                     * @return InstanceIdSet 待销毁的实例ID列表。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置待销毁的实例ID列表。
                     * @param _instanceIdSet 待销毁的实例ID列表。
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取是否定时销毁，默认为否。
                     * @return TerminateDelay 是否定时销毁，默认为否。
                     * 
                     */
                    bool GetTerminateDelay() const;

                    /**
                     * 设置是否定时销毁，默认为否。
                     * @param _terminateDelay 是否定时销毁，默认为否。
                     * 
                     */
                    void SetTerminateDelay(const bool& _terminateDelay);

                    /**
                     * 判断参数 TerminateDelay 是否已赋值
                     * @return TerminateDelay 是否已赋值
                     * 
                     */
                    bool TerminateDelayHasBeenSet() const;

                    /**
                     * 获取定时销毁的时间，格式形如："2019-08-05 12:01:30"，若非定时销毁，则此参数被忽略。
                     * @return TerminateTime 定时销毁的时间，格式形如："2019-08-05 12:01:30"，若非定时销毁，则此参数被忽略。
                     * 
                     */
                    std::string GetTerminateTime() const;

                    /**
                     * 设置定时销毁的时间，格式形如："2019-08-05 12:01:30"，若非定时销毁，则此参数被忽略。
                     * @param _terminateTime 定时销毁的时间，格式形如："2019-08-05 12:01:30"，若非定时销毁，则此参数被忽略。
                     * 
                     */
                    void SetTerminateTime(const std::string& _terminateTime);

                    /**
                     * 判断参数 TerminateTime 是否已赋值
                     * @return TerminateTime 是否已赋值
                     * 
                     */
                    bool TerminateTimeHasBeenSet() const;

                    /**
                     * 获取是否关联删除已绑定的弹性网卡和弹性IP，默认为true。
当为true时，一并删除弹性网卡和弹性IP；
当为false时，只销毁主机，保留弹性网卡和弹性IP。
                     * @return AssociatedResourceDestroy 是否关联删除已绑定的弹性网卡和弹性IP，默认为true。
当为true时，一并删除弹性网卡和弹性IP；
当为false时，只销毁主机，保留弹性网卡和弹性IP。
                     * 
                     */
                    bool GetAssociatedResourceDestroy() const;

                    /**
                     * 设置是否关联删除已绑定的弹性网卡和弹性IP，默认为true。
当为true时，一并删除弹性网卡和弹性IP；
当为false时，只销毁主机，保留弹性网卡和弹性IP。
                     * @param _associatedResourceDestroy 是否关联删除已绑定的弹性网卡和弹性IP，默认为true。
当为true时，一并删除弹性网卡和弹性IP；
当为false时，只销毁主机，保留弹性网卡和弹性IP。
                     * 
                     */
                    void SetAssociatedResourceDestroy(const bool& _associatedResourceDestroy);

                    /**
                     * 判断参数 AssociatedResourceDestroy 是否已赋值
                     * @return AssociatedResourceDestroy 是否已赋值
                     * 
                     */
                    bool AssociatedResourceDestroyHasBeenSet() const;

                private:

                    /**
                     * 待销毁的实例ID列表。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 是否定时销毁，默认为否。
                     */
                    bool m_terminateDelay;
                    bool m_terminateDelayHasBeenSet;

                    /**
                     * 定时销毁的时间，格式形如："2019-08-05 12:01:30"，若非定时销毁，则此参数被忽略。
                     */
                    std::string m_terminateTime;
                    bool m_terminateTimeHasBeenSet;

                    /**
                     * 是否关联删除已绑定的弹性网卡和弹性IP，默认为true。
当为true时，一并删除弹性网卡和弹性IP；
当为false时，只销毁主机，保留弹性网卡和弹性IP。
                     */
                    bool m_associatedResourceDestroy;
                    bool m_associatedResourceDestroyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_TERMINATEINSTANCESREQUEST_H_
