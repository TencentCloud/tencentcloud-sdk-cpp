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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CodeSearchInfoPage.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 代码搜索响应结果
                */
                class CodeSearchResult : public AbstractModel
                {
                public:
                    CodeSearchResult();
                    ~CodeSearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代码搜索结果列表
                     * @return CodeSearchInfoList 代码搜索结果列表
                     * 
                     */
                    CodeSearchInfoPage GetCodeSearchInfoList() const;

                    /**
                     * 设置代码搜索结果列表
                     * @param _codeSearchInfoList 代码搜索结果列表
                     * 
                     */
                    void SetCodeSearchInfoList(const CodeSearchInfoPage& _codeSearchInfoList);

                    /**
                     * 判断参数 CodeSearchInfoList 是否已赋值
                     * @return CodeSearchInfoList 是否已赋值
                     * 
                     */
                    bool CodeSearchInfoListHasBeenSet() const;

                    /**
                     * 获取开发空间搜索结果数
                     * @return DevCount 开发空间搜索结果数
                     * 
                     */
                    uint64_t GetDevCount() const;

                    /**
                     * 设置开发空间搜索结果数
                     * @param _devCount 开发空间搜索结果数
                     * 
                     */
                    void SetDevCount(const uint64_t& _devCount);

                    /**
                     * 判断参数 DevCount 是否已赋值
                     * @return DevCount 是否已赋值
                     * 
                     */
                    bool DevCountHasBeenSet() const;

                    /**
                     * 获取调度空间搜索结果数
                     * @return ScheduleCount 调度空间搜索结果数
                     * 
                     */
                    uint64_t GetScheduleCount() const;

                    /**
                     * 设置调度空间搜索结果数
                     * @param _scheduleCount 调度空间搜索结果数
                     * 
                     */
                    void SetScheduleCount(const uint64_t& _scheduleCount);

                    /**
                     * 判断参数 ScheduleCount 是否已赋值
                     * @return ScheduleCount 是否已赋值
                     * 
                     */
                    bool ScheduleCountHasBeenSet() const;

                    /**
                     * 获取回收站搜索结果数
                     * @return RecycleCount 回收站搜索结果数
                     * 
                     */
                    uint64_t GetRecycleCount() const;

                    /**
                     * 设置回收站搜索结果数
                     * @param _recycleCount 回收站搜索结果数
                     * 
                     */
                    void SetRecycleCount(const uint64_t& _recycleCount);

                    /**
                     * 判断参数 RecycleCount 是否已赋值
                     * @return RecycleCount 是否已赋值
                     * 
                     */
                    bool RecycleCountHasBeenSet() const;

                private:

                    /**
                     * 代码搜索结果列表
                     */
                    CodeSearchInfoPage m_codeSearchInfoList;
                    bool m_codeSearchInfoListHasBeenSet;

                    /**
                     * 开发空间搜索结果数
                     */
                    uint64_t m_devCount;
                    bool m_devCountHasBeenSet;

                    /**
                     * 调度空间搜索结果数
                     */
                    uint64_t m_scheduleCount;
                    bool m_scheduleCountHasBeenSet;

                    /**
                     * 回收站搜索结果数
                     */
                    uint64_t m_recycleCount;
                    bool m_recycleCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHRESULT_H_
