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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_SETINFO_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_SETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/DetailData.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * 云硬盘的仓库级别信息
                */
                class SetInfo : public AbstractModel
                {
                public:
                    SetInfo();
                    ~SetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云硬盘仓库id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetId 云硬盘仓库id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSetId() const;

                    /**
                     * 设置云硬盘仓库id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setId 云硬盘仓库id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetId(const std::string& _setId);

                    /**
                     * 判断参数 SetId 是否已赋值
                     * @return SetId 是否已赋值
                     * 
                     */
                    bool SetIdHasBeenSet() const;

                    /**
                     * 获取云硬盘仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetName 云硬盘仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSetName() const;

                    /**
                     * 设置云硬盘仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setName 云硬盘仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetName(const std::string& _setName);

                    /**
                     * 判断参数 SetName 是否已赋值
                     * @return SetName 是否已赋值
                     * 
                     */
                    bool SetNameHasBeenSet() const;

                    /**
                     * 获取云硬盘仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetType 云硬盘仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSetType() const;

                    /**
                     * 设置云硬盘仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setType 云硬盘仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetType(const std::string& _setType);

                    /**
                     * 判断参数 SetType 是否已赋值
                     * @return SetType 是否已赋值
                     * 
                     */
                    bool SetTypeHasBeenSet() const;

                    /**
                     * 获取云硬盘仓库容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetSize 云硬盘仓库容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetSetSize() const;

                    /**
                     * 设置云硬盘仓库容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setSize 云硬盘仓库容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetSize(const double& _setSize);

                    /**
                     * 判断参数 SetSize 是否已赋值
                     * @return SetSize 是否已赋值
                     * 
                     */
                    bool SetSizeHasBeenSet() const;

                    /**
                     * 获取云硬盘仓库状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetStatus 云硬盘仓库状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSetStatus() const;

                    /**
                     * 设置云硬盘仓库状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setStatus 云硬盘仓库状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetStatus(const std::string& _setStatus);

                    /**
                     * 判断参数 SetStatus 是否已赋值
                     * @return SetStatus 是否已赋值
                     * 
                     */
                    bool SetStatusHasBeenSet() const;

                    /**
                     * 获取云硬盘仓库创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 云硬盘仓库创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置云硬盘仓库创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 云硬盘仓库创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取读流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadTraffic 读流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DetailData GetReadTraffic() const;

                    /**
                     * 设置读流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readTraffic 读流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadTraffic(const DetailData& _readTraffic);

                    /**
                     * 判断参数 ReadTraffic 是否已赋值
                     * @return ReadTraffic 是否已赋值
                     * 
                     */
                    bool ReadTrafficHasBeenSet() const;

                    /**
                     * 获取写流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WriteTraffic 写流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DetailData GetWriteTraffic() const;

                    /**
                     * 设置写流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _writeTraffic 写流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWriteTraffic(const DetailData& _writeTraffic);

                    /**
                     * 判断参数 WriteTraffic 是否已赋值
                     * @return WriteTraffic 是否已赋值
                     * 
                     */
                    bool WriteTrafficHasBeenSet() const;

                    /**
                     * 获取读IO
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadIO 读IO
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DetailData GetReadIO() const;

                    /**
                     * 设置读IO
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readIO 读IO
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadIO(const DetailData& _readIO);

                    /**
                     * 判断参数 ReadIO 是否已赋值
                     * @return ReadIO 是否已赋值
                     * 
                     */
                    bool ReadIOHasBeenSet() const;

                    /**
                     * 获取写IO
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WriteIO 写IO
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DetailData GetWriteIO() const;

                    /**
                     * 设置写IO
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _writeIO 写IO
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWriteIO(const DetailData& _writeIO);

                    /**
                     * 判断参数 WriteIO 是否已赋值
                     * @return WriteIO 是否已赋值
                     * 
                     */
                    bool WriteIOHasBeenSet() const;

                    /**
                     * 获取平均等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Await 平均等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DetailData GetAwait() const;

                    /**
                     * 设置平均等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _await 平均等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAwait(const DetailData& _await);

                    /**
                     * 判断参数 Await 是否已赋值
                     * @return Await 是否已赋值
                     * 
                     */
                    bool AwaitHasBeenSet() const;

                    /**
                     * 获取利用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Util 利用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DetailData GetUtil() const;

                    /**
                     * 设置利用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _util 利用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUtil(const DetailData& _util);

                    /**
                     * 判断参数 Util 是否已赋值
                     * @return Util 是否已赋值
                     * 
                     */
                    bool UtilHasBeenSet() const;

                private:

                    /**
                     * 云硬盘仓库id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_setId;
                    bool m_setIdHasBeenSet;

                    /**
                     * 云硬盘仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_setName;
                    bool m_setNameHasBeenSet;

                    /**
                     * 云硬盘仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_setType;
                    bool m_setTypeHasBeenSet;

                    /**
                     * 云硬盘仓库容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_setSize;
                    bool m_setSizeHasBeenSet;

                    /**
                     * 云硬盘仓库状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_setStatus;
                    bool m_setStatusHasBeenSet;

                    /**
                     * 云硬盘仓库创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 读流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DetailData m_readTraffic;
                    bool m_readTrafficHasBeenSet;

                    /**
                     * 写流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DetailData m_writeTraffic;
                    bool m_writeTrafficHasBeenSet;

                    /**
                     * 读IO
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DetailData m_readIO;
                    bool m_readIOHasBeenSet;

                    /**
                     * 写IO
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DetailData m_writeIO;
                    bool m_writeIOHasBeenSet;

                    /**
                     * 平均等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DetailData m_await;
                    bool m_awaitHasBeenSet;

                    /**
                     * 利用率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DetailData m_util;
                    bool m_utilHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_SETINFO_H_
