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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEBACKUPSCHEDULERESPONSE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEBACKUPSCHEDULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/ScheduleStrategy.h>
#include <tencentcloud/cdwch/v20200915/model/BackupTableContent.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeBackUpSchedule返回参数结构体
                */
                class DescribeBackUpScheduleResponse : public AbstractModel
                {
                public:
                    DescribeBackUpScheduleResponse();
                    ~DescribeBackUpScheduleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份是否开启
                     * @return BackUpOpened 备份是否开启
                     * 
                     */
                    bool GetBackUpOpened() const;

                    /**
                     * 判断参数 BackUpOpened 是否已赋值
                     * @return BackUpOpened 是否已赋值
                     * 
                     */
                    bool BackUpOpenedHasBeenSet() const;

                    /**
                     * 获取元数据备份策略
                     * @return MetaStrategy 元数据备份策略
                     * 
                     */
                    ScheduleStrategy GetMetaStrategy() const;

                    /**
                     * 判断参数 MetaStrategy 是否已赋值
                     * @return MetaStrategy 是否已赋值
                     * 
                     */
                    bool MetaStrategyHasBeenSet() const;

                    /**
                     * 获取表数据备份策略
                     * @return DataStrategy 表数据备份策略
                     * 
                     */
                    ScheduleStrategy GetDataStrategy() const;

                    /**
                     * 判断参数 DataStrategy 是否已赋值
                     * @return DataStrategy 是否已赋值
                     * 
                     */
                    bool DataStrategyHasBeenSet() const;

                    /**
                     * 获取备份表列表
                     * @return BackUpContents 备份表列表
                     * 
                     */
                    std::vector<BackupTableContent> GetBackUpContents() const;

                    /**
                     * 判断参数 BackUpContents 是否已赋值
                     * @return BackUpContents 是否已赋值
                     * 
                     */
                    bool BackUpContentsHasBeenSet() const;

                    /**
                     * 获取备份的状态
                     * @return BackUpStatus 备份的状态
                     * 
                     */
                    int64_t GetBackUpStatus() const;

                    /**
                     * 判断参数 BackUpStatus 是否已赋值
                     * @return BackUpStatus 是否已赋值
                     * 
                     */
                    bool BackUpStatusHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrorMsg 错误信息
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 备份是否开启
                     */
                    bool m_backUpOpened;
                    bool m_backUpOpenedHasBeenSet;

                    /**
                     * 元数据备份策略
                     */
                    ScheduleStrategy m_metaStrategy;
                    bool m_metaStrategyHasBeenSet;

                    /**
                     * 表数据备份策略
                     */
                    ScheduleStrategy m_dataStrategy;
                    bool m_dataStrategyHasBeenSet;

                    /**
                     * 备份表列表
                     */
                    std::vector<BackupTableContent> m_backUpContents;
                    bool m_backUpContentsHasBeenSet;

                    /**
                     * 备份的状态
                     */
                    int64_t m_backUpStatus;
                    bool m_backUpStatusHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEBACKUPSCHEDULERESPONSE_H_
