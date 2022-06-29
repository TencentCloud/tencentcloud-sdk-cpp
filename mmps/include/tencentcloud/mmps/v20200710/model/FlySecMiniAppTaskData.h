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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_FLYSECMINIAPPTASKDATA_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_FLYSECMINIAPPTASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            namespace Model
            {
                /**
                * 翼扬诊断小程序任务数据
                */
                class FlySecMiniAppTaskData : public AbstractModel
                {
                public:
                    FlySecMiniAppTaskData();
                    ~FlySecMiniAppTaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
                     * @return TaskID 任务id
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置任务id
                     * @param TaskID 任务id
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取小程序appid
                     * @return MiniAppID 小程序appid
                     */
                    std::string GetMiniAppID() const;

                    /**
                     * 设置小程序appid
                     * @param MiniAppID 小程序appid
                     */
                    void SetMiniAppID(const std::string& _miniAppID);

                    /**
                     * 判断参数 MiniAppID 是否已赋值
                     * @return MiniAppID 是否已赋值
                     */
                    bool MiniAppIDHasBeenSet() const;

                    /**
                     * 获取小程序名称
                     * @return MiniAppName 小程序名称
                     */
                    std::string GetMiniAppName() const;

                    /**
                     * 设置小程序名称
                     * @param MiniAppName 小程序名称
                     */
                    void SetMiniAppName(const std::string& _miniAppName);

                    /**
                     * 判断参数 MiniAppName 是否已赋值
                     * @return MiniAppName 是否已赋值
                     */
                    bool MiniAppNameHasBeenSet() const;

                    /**
                     * 获取小程序版本
                     * @return MiniAppVersion 小程序版本
                     */
                    std::string GetMiniAppVersion() const;

                    /**
                     * 设置小程序版本
                     * @param MiniAppVersion 小程序版本
                     */
                    void SetMiniAppVersion(const std::string& _miniAppVersion);

                    /**
                     * 判断参数 MiniAppVersion 是否已赋值
                     * @return MiniAppVersion 是否已赋值
                     */
                    bool MiniAppVersionHasBeenSet() const;

                    /**
                     * 获取诊断模式 1:基础诊断，2:深度诊断
                     * @return Mode 诊断模式 1:基础诊断，2:深度诊断
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置诊断模式 1:基础诊断，2:深度诊断
                     * @param Mode 诊断模式 1:基础诊断，2:深度诊断
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取诊断时间
                     * @return CreateTime 诊断时间
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置诊断时间
                     * @param CreateTime 诊断时间
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取诊断状态, 0:排队中, 1:成功, 2:失败, 3:进行中
                     * @return Status 诊断状态, 0:排队中, 1:成功, 2:失败, 3:进行中
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置诊断状态, 0:排队中, 1:成功, 2:失败, 3:进行中
                     * @param Status 诊断状态, 0:排队中, 1:成功, 2:失败, 3:进行中
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取诊断失败错误码
                     * @return Error 诊断失败错误码
                     */
                    int64_t GetError() const;

                    /**
                     * 设置诊断失败错误码
                     * @param Error 诊断失败错误码
                     */
                    void SetError(const int64_t& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 小程序appid
                     */
                    std::string m_miniAppID;
                    bool m_miniAppIDHasBeenSet;

                    /**
                     * 小程序名称
                     */
                    std::string m_miniAppName;
                    bool m_miniAppNameHasBeenSet;

                    /**
                     * 小程序版本
                     */
                    std::string m_miniAppVersion;
                    bool m_miniAppVersionHasBeenSet;

                    /**
                     * 诊断模式 1:基础诊断，2:深度诊断
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 诊断时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 诊断状态, 0:排队中, 1:成功, 2:失败, 3:进行中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 诊断失败错误码
                     */
                    int64_t m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_FLYSECMINIAPPTASKDATA_H_
