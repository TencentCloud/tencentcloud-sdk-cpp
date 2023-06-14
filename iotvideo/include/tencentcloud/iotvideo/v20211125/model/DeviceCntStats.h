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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DEVICECNTSTATS_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DEVICECNTSTATS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * 设备数量统计
                */
                class DeviceCntStats : public AbstractModel
                {
                public:
                    DeviceCntStats();
                    ~DeviceCntStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计日期
                     * @return Date 统计日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置统计日期
                     * @param _date 统计日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取新增注册设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewRegisterCnt 新增注册设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNewRegisterCnt() const;

                    /**
                     * 设置新增注册设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newRegisterCnt 新增注册设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewRegisterCnt(const uint64_t& _newRegisterCnt);

                    /**
                     * 判断参数 NewRegisterCnt 是否已赋值
                     * @return NewRegisterCnt 是否已赋值
                     * 
                     */
                    bool NewRegisterCntHasBeenSet() const;

                    /**
                     * 获取新增激活设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewActivateCnt 新增激活设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNewActivateCnt() const;

                    /**
                     * 设置新增激活设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newActivateCnt 新增激活设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewActivateCnt(const uint64_t& _newActivateCnt);

                    /**
                     * 判断参数 NewActivateCnt 是否已赋值
                     * @return NewActivateCnt 是否已赋值
                     * 
                     */
                    bool NewActivateCntHasBeenSet() const;

                    /**
                     * 获取活跃设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveCnt 活跃设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetActiveCnt() const;

                    /**
                     * 设置活跃设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeCnt 活跃设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActiveCnt(const uint64_t& _activeCnt);

                    /**
                     * 判断参数 ActiveCnt 是否已赋值
                     * @return ActiveCnt 是否已赋值
                     * 
                     */
                    bool ActiveCntHasBeenSet() const;

                private:

                    /**
                     * 统计日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 新增注册设备数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_newRegisterCnt;
                    bool m_newRegisterCntHasBeenSet;

                    /**
                     * 新增激活设备数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_newActivateCnt;
                    bool m_newActivateCntHasBeenSet;

                    /**
                     * 活跃设备数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_activeCnt;
                    bool m_activeCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DEVICECNTSTATS_H_
