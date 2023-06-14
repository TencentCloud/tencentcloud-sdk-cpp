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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_TASKINFO_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_TASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * 任务列表详细信息
                */
                class TaskInfo : public AbstractModel
                {
                public:
                    TaskInfo();
                    ~TaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务类型，目前取值为 “UpdateShadow” 或者 “PublishMessage”
                     * @return Type 任务类型，目前取值为 “UpdateShadow” 或者 “PublishMessage”
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务类型，目前取值为 “UpdateShadow” 或者 “PublishMessage”
                     * @param _type 任务类型，目前取值为 “UpdateShadow” 或者 “PublishMessage”
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取任务 ID
                     * @return Id 任务 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置任务 ID
                     * @param _id 任务 ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取产品 ID
                     * @return ProductId 产品 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品 ID
                     * @param _productId 产品 ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取状态。1表示等待处理，2表示调度处理中，3表示已完成，4表示失败，5表示已取消
                     * @return Status 状态。1表示等待处理，2表示调度处理中，3表示已完成，4表示失败，5表示已取消
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态。1表示等待处理，2表示调度处理中，3表示已完成，4表示失败，5表示已取消
                     * @param _status 状态。1表示等待处理，2表示调度处理中，3表示已完成，4表示失败，5表示已取消
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务创建时间，Unix 时间戳
                     * @return CreateTime 任务创建时间，Unix 时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置任务创建时间，Unix 时间戳
                     * @param _createTime 任务创建时间，Unix 时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后任务更新时间，Unix 时间戳
                     * @return UpdateTime 最后任务更新时间，Unix 时间戳
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置最后任务更新时间，Unix 时间戳
                     * @param _updateTime 最后任务更新时间，Unix 时间戳
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取返回的错误码
                     * @return RetCode 返回的错误码
                     * 
                     */
                    uint64_t GetRetCode() const;

                    /**
                     * 设置返回的错误码
                     * @param _retCode 返回的错误码
                     * 
                     */
                    void SetRetCode(const uint64_t& _retCode);

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     * 
                     */
                    bool RetCodeHasBeenSet() const;

                    /**
                     * 获取返回的错误信息
                     * @return ErrMsg 返回的错误信息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置返回的错误信息
                     * @param _errMsg 返回的错误信息
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * 任务类型，目前取值为 “UpdateShadow” 或者 “PublishMessage”
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 任务 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 产品 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 状态。1表示等待处理，2表示调度处理中，3表示已完成，4表示失败，5表示已取消
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务创建时间，Unix 时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后任务更新时间，Unix 时间戳
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 返回的错误码
                     */
                    uint64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * 返回的错误信息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_TASKINFO_H_
