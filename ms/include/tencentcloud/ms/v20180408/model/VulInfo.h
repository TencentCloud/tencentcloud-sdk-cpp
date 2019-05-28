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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_VULINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_VULINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/VulList.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 漏洞信息
                */
                class VulInfo : public AbstractModel
                {
                public:
                    VulInfo();
                    ~VulInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞列表
                     * @return VulList 漏洞列表
                     */
                    std::vector<VulList> GetVulList() const;

                    /**
                     * 设置漏洞列表
                     * @param VulList 漏洞列表
                     */
                    void SetVulList(const std::vector<VulList>& _vulList);

                    /**
                     * 判断参数 VulList 是否已赋值
                     * @return VulList 是否已赋值
                     */
                    bool VulListHasBeenSet() const;

                    /**
                     * 获取漏洞文件评分
                     * @return VulFileScore 漏洞文件评分
                     */
                    uint64_t GetVulFileScore() const;

                    /**
                     * 设置漏洞文件评分
                     * @param VulFileScore 漏洞文件评分
                     */
                    void SetVulFileScore(const uint64_t& _vulFileScore);

                    /**
                     * 判断参数 VulFileScore 是否已赋值
                     * @return VulFileScore 是否已赋值
                     */
                    bool VulFileScoreHasBeenSet() const;

                private:

                    /**
                     * 漏洞列表
                     */
                    std::vector<VulList> m_vulList;
                    bool m_vulListHasBeenSet;

                    /**
                     * 漏洞文件评分
                     */
                    uint64_t m_vulFileScore;
                    bool m_vulFileScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_VULINFO_H_
