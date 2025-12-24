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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_TESTITEM_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_TESTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 检测步骤详情
                */
                class TestItem : public AbstractModel
                {
                public:
                    TestItem();
                    ~TestItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检测步骤名称</p>
                     * @return TestName <p>检测步骤名称</p>
                     * 
                     */
                    std::string GetTestName() const;

                    /**
                     * 设置<p>检测步骤名称</p>
                     * @param _testName <p>检测步骤名称</p>
                     * 
                     */
                    void SetTestName(const std::string& _testName);

                    /**
                     * 判断参数 TestName 是否已赋值
                     * @return TestName 是否已赋值
                     * 
                     */
                    bool TestNameHasBeenSet() const;

                    /**
                     * 获取<p>错误码</p>
                     * @return Code <p>错误码</p>
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置<p>错误码</p>
                     * @param _code <p>错误码</p>
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return Message <p>错误信息</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _message <p>错误信息</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * <p>检测步骤名称</p>
                     */
                    std::string m_testName;
                    bool m_testNameHasBeenSet;

                    /**
                     * <p>错误码</p>
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_TESTITEM_H_
