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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKIGNORELISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKIGNORELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/IocListData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyBlockIgnoreList请求参数结构体
                */
                class ModifyBlockIgnoreListRequest : public AbstractModel
                {
                public:
                    ModifyBlockIgnoreListRequest();
                    ~ModifyBlockIgnoreListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取1拦截列表 2 忽略列表
                     * @return RuleType 1拦截列表 2 忽略列表
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置1拦截列表 2 忽略列表
                     * @param RuleType 1拦截列表 2 忽略列表
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取IP、Domain二选一，不能同时为空
                     * @return IOC IP、Domain二选一，不能同时为空
                     */
                    std::vector<IocListData> GetIOC() const;

                    /**
                     * 设置IP、Domain二选一，不能同时为空
                     * @param IOC IP、Domain二选一，不能同时为空
                     */
                    void SetIOC(const std::vector<IocListData>& _iOC);

                    /**
                     * 判断参数 IOC 是否已赋值
                     * @return IOC 是否已赋值
                     */
                    bool IOCHasBeenSet() const;

                    /**
                     * 获取默认值:delete（删除）、edit（编辑）、add（添加）  其他值无效
                     * @return IocAction 默认值:delete（删除）、edit（编辑）、add（添加）  其他值无效
                     */
                    std::string GetIocAction() const;

                    /**
                     * 设置默认值:delete（删除）、edit（编辑）、add（添加）  其他值无效
                     * @param IocAction 默认值:delete（删除）、edit（编辑）、add（添加）  其他值无效
                     */
                    void SetIocAction(const std::string& _iocAction);

                    /**
                     * 判断参数 IocAction 是否已赋值
                     * @return IocAction 是否已赋值
                     */
                    bool IocActionHasBeenSet() const;

                    /**
                     * 获取时间格式：yyyy-MM-dd HH:mm:ss
                     * @return StartTime 时间格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置时间格式：yyyy-MM-dd HH:mm:ss
                     * @param StartTime 时间格式：yyyy-MM-dd HH:mm:ss
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取时间格式：yyyy-MM-dd HH:mm:ss
                     * @return EndTime 时间格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置时间格式：yyyy-MM-dd HH:mm:ss
                     * @param EndTime 时间格式：yyyy-MM-dd HH:mm:ss
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 1拦截列表 2 忽略列表
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * IP、Domain二选一，不能同时为空
                     */
                    std::vector<IocListData> m_iOC;
                    bool m_iOCHasBeenSet;

                    /**
                     * 默认值:delete（删除）、edit（编辑）、add（添加）  其他值无效
                     */
                    std::string m_iocAction;
                    bool m_iocActionHasBeenSet;

                    /**
                     * 时间格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 时间格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKIGNORELISTREQUEST_H_
