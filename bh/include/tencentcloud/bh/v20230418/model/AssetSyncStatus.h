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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_ASSETSYNCSTATUS_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_ASSETSYNCSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 资产同步状态
                */
                class AssetSyncStatus : public AbstractModel
                {
                public:
                    AssetSyncStatus();
                    ~AssetSyncStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上一次同步完成的时间
                     * @return LastTime 上一次同步完成的时间
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置上一次同步完成的时间
                     * @param _lastTime 上一次同步完成的时间
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取上一次同步的结果。 0 - 从未进行, 1 - 成功， 2 - 失败
                     * @return LastStatus 上一次同步的结果。 0 - 从未进行, 1 - 成功， 2 - 失败
                     * 
                     */
                    uint64_t GetLastStatus() const;

                    /**
                     * 设置上一次同步的结果。 0 - 从未进行, 1 - 成功， 2 - 失败
                     * @param _lastStatus 上一次同步的结果。 0 - 从未进行, 1 - 成功， 2 - 失败
                     * 
                     */
                    void SetLastStatus(const uint64_t& _lastStatus);

                    /**
                     * 判断参数 LastStatus 是否已赋值
                     * @return LastStatus 是否已赋值
                     * 
                     */
                    bool LastStatusHasBeenSet() const;

                    /**
                     * 获取同步任务是否正在进行中
                     * @return InProcess 同步任务是否正在进行中
                     * 
                     */
                    bool GetInProcess() const;

                    /**
                     * 设置同步任务是否正在进行中
                     * @param _inProcess 同步任务是否正在进行中
                     * 
                     */
                    void SetInProcess(const bool& _inProcess);

                    /**
                     * 判断参数 InProcess 是否已赋值
                     * @return InProcess 是否已赋值
                     * 
                     */
                    bool InProcessHasBeenSet() const;

                    /**
                     * 获取任务错误消息
                     * @return ErrMsg 任务错误消息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置任务错误消息
                     * @param _errMsg 任务错误消息
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * 上一次同步完成的时间
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 上一次同步的结果。 0 - 从未进行, 1 - 成功， 2 - 失败
                     */
                    uint64_t m_lastStatus;
                    bool m_lastStatusHasBeenSet;

                    /**
                     * 同步任务是否正在进行中
                     */
                    bool m_inProcess;
                    bool m_inProcessHasBeenSet;

                    /**
                     * 任务错误消息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_ASSETSYNCSTATUS_H_
