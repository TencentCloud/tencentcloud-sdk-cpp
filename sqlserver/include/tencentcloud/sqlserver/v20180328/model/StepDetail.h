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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_STEPDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_STEPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 进度步骤详情
                */
                class StepDetail : public AbstractModel
                {
                public:
                    StepDetail();
                    ~StepDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取具体步骤返回信息
                     * @return Msg 具体步骤返回信息
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置具体步骤返回信息
                     * @param _msg 具体步骤返回信息
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取当前步骤状态，0成功，-2未开始
                     * @return Status 当前步骤状态，0成功，-2未开始
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置当前步骤状态，0成功，-2未开始
                     * @param _status 当前步骤状态，0成功，-2未开始
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
                     * 获取步骤名称
                     * @return Name 步骤名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置步骤名称
                     * @param _name 步骤名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 具体步骤返回信息
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 当前步骤状态，0成功，-2未开始
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 步骤名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_STEPDETAIL_H_
