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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_SURGERY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_SURGERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryHistory.h>
#include <tencentcloud/mrs/v20200910/model/OtherInfo.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 手术记录
                */
                class Surgery : public AbstractModel
                {
                public:
                    Surgery();
                    ~Surgery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取手术史
                     * @return SurgeryHistory 手术史
                     * 
                     */
                    SurgeryHistory GetSurgeryHistory() const;

                    /**
                     * 设置手术史
                     * @param _surgeryHistory 手术史
                     * 
                     */
                    void SetSurgeryHistory(const SurgeryHistory& _surgeryHistory);

                    /**
                     * 判断参数 SurgeryHistory 是否已赋值
                     * @return SurgeryHistory 是否已赋值
                     * 
                     */
                    bool SurgeryHistoryHasBeenSet() const;

                    /**
                     * 获取其他信息
                     * @return OtherInfo 其他信息
                     * 
                     */
                    OtherInfo GetOtherInfo() const;

                    /**
                     * 设置其他信息
                     * @param _otherInfo 其他信息
                     * 
                     */
                    void SetOtherInfo(const OtherInfo& _otherInfo);

                    /**
                     * 判断参数 OtherInfo 是否已赋值
                     * @return OtherInfo 是否已赋值
                     * 
                     */
                    bool OtherInfoHasBeenSet() const;

                    /**
                     * 获取数据在原PDF文件中的第几页
                     * @return Page 数据在原PDF文件中的第几页
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置数据在原PDF文件中的第几页
                     * @param _page 数据在原PDF文件中的第几页
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 手术史
                     */
                    SurgeryHistory m_surgeryHistory;
                    bool m_surgeryHistoryHasBeenSet;

                    /**
                     * 其他信息
                     */
                    OtherInfo m_otherInfo;
                    bool m_otherInfoHasBeenSet;

                    /**
                     * 数据在原PDF文件中的第几页
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_SURGERY_H_
