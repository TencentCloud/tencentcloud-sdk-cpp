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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEACTIVERESULT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEACTIVERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 设备激活结果数据
                */
                class DeviceActiveResult : public AbstractModel
                {
                public:
                    DeviceActiveResult();
                    ~DeviceActiveResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelId 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * @deprecated
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取SN信息
                     * @return Sn SN信息
                     * 
                     */
                    std::string GetSn() const;

                    /**
                     * 设置SN信息
                     * @param _sn SN信息
                     * 
                     */
                    void SetSn(const std::string& _sn);

                    /**
                     * 判断参数 Sn 是否已赋值
                     * @return Sn 是否已赋值
                     * 
                     */
                    bool SnHasBeenSet() const;

                    /**
                     * 获取设备激活状态，0：激活成功；50011：系统错误；50012：产品不存在；50013：设备不存在；50014：产品无权限；50015：不是音视频产品；50016：SN格式错误；50017：激活码类型错误；50018：激活次数限频；50019：激活码不足；50020：SN已暂停；
                     * @return ErrCode 设备激活状态，0：激活成功；50011：系统错误；50012：产品不存在；50013：设备不存在；50014：产品无权限；50015：不是音视频产品；50016：SN格式错误；50017：激活码类型错误；50018：激活次数限频；50019：激活码不足；50020：SN已暂停；
                     * 
                     */
                    uint64_t GetErrCode() const;

                    /**
                     * 设置设备激活状态，0：激活成功；50011：系统错误；50012：产品不存在；50013：设备不存在；50014：产品无权限；50015：不是音视频产品；50016：SN格式错误；50017：激活码类型错误；50018：激活次数限频；50019：激活码不足；50020：SN已暂停；
                     * @param _errCode 设备激活状态，0：激活成功；50011：系统错误；50012：产品不存在；50013：设备不存在；50014：产品无权限；50015：不是音视频产品；50016：SN格式错误；50017：激活码类型错误；50018：激活次数限频；50019：激活码不足；50020：SN已暂停；
                     * 
                     */
                    void SetErrCode(const uint64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * SN信息
                     */
                    std::string m_sn;
                    bool m_snHasBeenSet;

                    /**
                     * 设备激活状态，0：激活成功；50011：系统错误；50012：产品不存在；50013：设备不存在；50014：产品无权限；50015：不是音视频产品；50016：SN格式错误；50017：激活码类型错误；50018：激活次数限频；50019：激活码不足；50020：SN已暂停；
                     */
                    uint64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEACTIVERESULT_H_
