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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_MUTESLICE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_MUTESLICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 所有静音片段。
                */
                class MuteSlice : public AbstractModel
                {
                public:
                    MuteSlice();
                    ~MuteSlice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取起始时间。
                     * @return MuteBtm 起始时间。
                     * 
                     */
                    int64_t GetMuteBtm() const;

                    /**
                     * 设置起始时间。
                     * @param _muteBtm 起始时间。
                     * 
                     */
                    void SetMuteBtm(const int64_t& _muteBtm);

                    /**
                     * 判断参数 MuteBtm 是否已赋值
                     * @return MuteBtm 是否已赋值
                     * 
                     */
                    bool MuteBtmHasBeenSet() const;

                    /**
                     * 获取终止时间。
                     * @return MuteEtm 终止时间。
                     * 
                     */
                    int64_t GetMuteEtm() const;

                    /**
                     * 设置终止时间。
                     * @param _muteEtm 终止时间。
                     * 
                     */
                    void SetMuteEtm(const int64_t& _muteEtm);

                    /**
                     * 判断参数 MuteEtm 是否已赋值
                     * @return MuteEtm 是否已赋值
                     * 
                     */
                    bool MuteEtmHasBeenSet() const;

                private:

                    /**
                     * 起始时间。
                     */
                    int64_t m_muteBtm;
                    bool m_muteBtmHasBeenSet;

                    /**
                     * 终止时间。
                     */
                    int64_t m_muteEtm;
                    bool m_muteEtmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_MUTESLICE_H_
