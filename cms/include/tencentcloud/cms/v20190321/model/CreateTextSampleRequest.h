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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_CREATETEXTSAMPLEREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_CREATETEXTSAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * CreateTextSample请求参数结构体
                */
                class CreateTextSampleRequest : public AbstractModel
                {
                public:
                    CreateTextSampleRequest();
                    ~CreateTextSampleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关键词数组
                     * @return Contents 关键词数组
                     */
                    std::vector<std::string> GetContents() const;

                    /**
                     * 设置关键词数组
                     * @param Contents 关键词数组
                     */
                    void SetContents(const std::vector<std::string>& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
20105：广告引流
                     * @return EvilType 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
20105：广告引流
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 设置恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
20105：广告引流
                     * @param EvilType 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
20105：广告引流
                     */
                    void SetEvilType(const int64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取样本类型
1：黑库
2：白库
                     * @return Label 样本类型
1：黑库
2：白库
                     */
                    uint64_t GetLabel() const;

                    /**
                     * 设置样本类型
1：黑库
2：白库
                     * @param Label 样本类型
1：黑库
2：白库
                     */
                    void SetLabel(const uint64_t& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取测试修改参数
                     * @return Test 测试修改参数
                     */
                    std::string GetTest() const;

                    /**
                     * 设置测试修改参数
                     * @param Test 测试修改参数
                     */
                    void SetTest(const std::string& _test);

                    /**
                     * 判断参数 Test 是否已赋值
                     * @return Test 是否已赋值
                     */
                    bool TestHasBeenSet() const;

                private:

                    /**
                     * 关键词数组
                     */
                    std::vector<std::string> m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
20105：广告引流
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 样本类型
1：黑库
2：白库
                     */
                    uint64_t m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 测试修改参数
                     */
                    std::string m_test;
                    bool m_testHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_CREATETEXTSAMPLEREQUEST_H_
