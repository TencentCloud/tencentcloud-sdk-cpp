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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_PROTECTURLINFO_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_PROTECTURLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * 保护网站信息
                */
                class ProtectURLInfo : public AbstractModel
                {
                public:
                    ProtectURLInfo();
                    ~ProtectURLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取xxx
                     * @return ProtectURLId xxx
                     */
                    int64_t GetProtectURLId() const;

                    /**
                     * 设置xxx
                     * @param ProtectURLId xxx
                     */
                    void SetProtectURLId(const int64_t& _protectURLId);

                    /**
                     * 判断参数 ProtectURLId 是否已赋值
                     * @return ProtectURLId 是否已赋值
                     */
                    bool ProtectURLIdHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return ProtectURL xxx
                     */
                    std::string GetProtectURL() const;

                    /**
                     * 设置xxx
                     * @param ProtectURL xxx
                     */
                    void SetProtectURL(const std::string& _protectURL);

                    /**
                     * 判断参数 ProtectURL 是否已赋值
                     * @return ProtectURL 是否已赋值
                     */
                    bool ProtectURLHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return ProtectWeb xxx
                     */
                    std::string GetProtectWeb() const;

                    /**
                     * 设置xxx
                     * @param ProtectWeb xxx
                     */
                    void SetProtectWeb(const std::string& _protectWeb);

                    /**
                     * 判断参数 ProtectWeb 是否已赋值
                     * @return ProtectWeb 是否已赋值
                     */
                    bool ProtectWebHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return ProtectURLStatus xxx
                     */
                    int64_t GetProtectURLStatus() const;

                    /**
                     * 设置xxx
                     * @param ProtectURLStatus xxx
                     */
                    void SetProtectURLStatus(const int64_t& _protectURLStatus);

                    /**
                     * 判断参数 ProtectURLStatus 是否已赋值
                     * @return ProtectURLStatus 是否已赋值
                     */
                    bool ProtectURLStatusHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return ProtectURLNote xxx
                     */
                    std::string GetProtectURLNote() const;

                    /**
                     * 设置xxx
                     * @param ProtectURLNote xxx
                     */
                    void SetProtectURLNote(const std::string& _protectURLNote);

                    /**
                     * 判断参数 ProtectURLNote 是否已赋值
                     * @return ProtectURLNote 是否已赋值
                     */
                    bool ProtectURLNoteHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return CreateTime xxx
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置xxx
                     * @param CreateTime xxx
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * xxx
                     */
                    int64_t m_protectURLId;
                    bool m_protectURLIdHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_protectURL;
                    bool m_protectURLHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_protectWeb;
                    bool m_protectWebHasBeenSet;

                    /**
                     * xxx
                     */
                    int64_t m_protectURLStatus;
                    bool m_protectURLStatusHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_protectURLNote;
                    bool m_protectURLNoteHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_PROTECTURLINFO_H_
